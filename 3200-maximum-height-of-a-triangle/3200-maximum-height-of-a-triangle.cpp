class Solution {
public:
    int maxHeightOfTriangle(int red, int blue) {
        int count=0;
        int c1=0;
        int c2=0; 
        for(int i=1;i<=100;i++){
            if(i%2==0)c1+=i;
            else c2+=i;
            if(max(c1,c2)<=max(red,blue)&&min(c1,c2)<=min(red,blue)){
                count++;
            }
            else{
                break;
            }
        }
        
        return count;
    }
};