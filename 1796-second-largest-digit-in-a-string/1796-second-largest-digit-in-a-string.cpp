class Solution {
public:
    int secondHighest(string s) {
        
	int largest =0;
	int secondlargest=0;
    set<int>st;

	 for(int i=0;i<s.size();i++){
	 	char ch=s[i];
	 	if(ch>=47 && ch<=57){
	 		int num=ch-'0';
            st.insert(num);
	  }
	 }
    for(auto x:st){
        secondlargest=largest;
        largest=max(largest,x);
    }
    int length=st.size();
	if(length==0||length==1){
        return -1;
    }
    else{
        return secondlargest;
    }
    }
};