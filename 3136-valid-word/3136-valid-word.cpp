class Solution {
public:
    bool isValid(string word) {
    if(word.size()<3)
        return false;
    bool f1=false,f2=false;
    for(int i=0;i<word.size();i++)
    {
        if(word[i]>='0'&&word[i]<='9')
        {
            continue;
        }
               if(word[i]=='A'||word[i]=='a'||word[i]=='e'||word[i]=='E'||word[i]=='i'||word[i]=='I'||word[i]=='o'||word[i]=='O'||word[i]=='u'||word[i]=='U')
        {
            f1=true;
    }
    else if((word[i]>='a' && word[i]<='z')||(word[i]>='A' && word[i]<='Z'))
    {
        f2=true;
        
    }
    else{
           return false;
    }
        
    }
        
        
    if(f1&f2)
        return true;
        
    else
        return false;
    }
};