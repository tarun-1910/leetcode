class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;
        vector<int>h(26);
        for(int i=0;i<s.length();i++){
            h[s[i]-'a']++;
        }
        for(int i=0;i<t.length();i++){
            int x=--h[t[i]-'a'];
            if(x<0)
                return false;
        }
        return true;
    }
};