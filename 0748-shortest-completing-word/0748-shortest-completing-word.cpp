class Solution {
public:
    string shortestCompletingWord(string li, vector<string>& words) {
        
        int cnt[26]={0};
        for(int i=0;i<li.size();i++){
            if(li[i]==' '||li[i]>='0'&&li[i]<='9') continue;
          if('A'<=li[i] && li[i]<='Z')
            li[i]=char('a'+li[i]-'A');
             cnt[li[i]-'a']++;
        }
        vector<string>ans;
        for(int i=0;i<words.size();i++){
            int cntA[26]={0};
            for(int j=0;j<words[i].size();j++){
                cntA[words[i][j]-'a']++;
            }
            bool f=true;
            for(int k=0;k<26;k++){
                if(cntA[k]<cnt[k]){
                    f=!f;
                    break;
                }
            }
            if(f)
                ans.push_back(words[i]);
        }
        int min_length=INT_MAX;
        string temp;
        for(auto it:ans){
            if(it.size()<min_length){
                min_length=it.size();
                temp=it;
                
            }
        }
        
       return temp;  
        
        
    }
};