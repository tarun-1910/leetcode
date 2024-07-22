class Solution {
public:
    int minChanges(int n, int k) {
       int cnt=0;
        for(int i=0;i<50;i++){
            if(n%2!=k%2){
                if(n%2==1)cnt++;
                else return -1;
            }
            k/=2;
            n/=2;
        }
        return cnt;
    }
};