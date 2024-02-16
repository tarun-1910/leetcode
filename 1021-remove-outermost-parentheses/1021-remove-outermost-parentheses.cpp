class Solution {
public:
    char stack[100000];
          int top=-1;
    void push(char c){
  
        top=top+1;
        stack[top]=c;
    }
    char pop(){
      return stack[top--];
    }
    string removeOuterParentheses(string s) {
        string a;
        int count=0;
        for(auto it:s){
            if(it=='('){
                push('(');
                count++;
            }
            else if(it==')' && count>1){
            while(top!=0){
                a=a+'(';
                pop();
            }
                a=a+')';
                count--;
            }
            else{
                pop();
                count--;
            }
        }
        return a;
    }
    
};