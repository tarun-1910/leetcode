class Solution {
public:
    string compressedString(string word) {
        string ans="";
        int j=0;
        int n=word.size();
        for(int i=0;i<n;i++){
            j=i;
            while(j<n && j<i+9 && word[i]==word[j])j++;
            ans+=char('0'+j-i);
            ans+=word[i];
            i=j-1;
        }
        return ans;
    }
};