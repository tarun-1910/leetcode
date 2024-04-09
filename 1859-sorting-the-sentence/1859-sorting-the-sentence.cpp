class Solution {
public:
    string sortSentence(string s) {
      map<int,string>mp;
     string temp=" ";
     string sort;

     for(int i=0;i<s.size();i++){
     	 if(isdigit(s[i])){
     	 int num=s[i]-'0';
     	 mp[num]=temp;
     	 temp ="";
     	}
     	else{
     		temp=temp+s[i];
     
         }
     }
      for(int i=0;i<mp.size();i++){
          sort+=mp[i];
      }
        return sort.substr(1,sort.size());
        
    }
};