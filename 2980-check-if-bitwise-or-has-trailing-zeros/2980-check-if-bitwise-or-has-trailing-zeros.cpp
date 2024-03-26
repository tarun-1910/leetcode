class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();++i){
            for(int j=i+1;j<nums.size();++j){
                sum= nums[i] | nums[j];
                if(sum%2==0){
                    return true;
                }
              }  
            }
         return false;     
     }
};