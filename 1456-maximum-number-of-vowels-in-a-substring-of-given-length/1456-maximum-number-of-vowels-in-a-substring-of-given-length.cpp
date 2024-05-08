class Solution {
public:
    bool isvowel(char c){
        return c=='a'||c=='e'|| c=='i'||c=='o'||c=='u';
    }
    int maxVowels(string s, int k) {
        int maxlength=0;
        int vcount=0;
        for(int i=0;i<k;i++){
            if(isvowel(s[i])){
                vcount++;
            }
        }
        int st=0;
        for(int i=k;i<s.size();i++){
            maxlength=max(maxlength,vcount);
            if(isvowel(s[st])){
                vcount--;
              
            }
             st++;
            if(isvowel(s[i])){
                vcount++;
            }
        }
        maxlength=max(vcount,maxlength);
        return maxlength;
    }
};