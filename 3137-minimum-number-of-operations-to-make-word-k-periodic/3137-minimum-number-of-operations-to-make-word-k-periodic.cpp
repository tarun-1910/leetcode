class Solution {
public:
    int minimumOperationsToMakeKPeriodic(string word, int k) {
            map<string,int> mp;
    string temp="";
    for(int i=0;i<word.size();i++){
       if(i%k==0){
          if(temp.size()>0) mp[temp]++;
          temp="";
           temp+=word[i];
       }else{
           temp+=word[i];
       }
    }
    mp[temp]++;
    int max_count=0;
    for(auto it:mp){
       max_count=max(max_count,it.second);
    }
    return word.size()/k-max_count;
    }
};