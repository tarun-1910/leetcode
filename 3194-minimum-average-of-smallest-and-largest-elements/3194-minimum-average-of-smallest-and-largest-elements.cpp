class Solution {
public:
    double minimumAverage(vector<int>& nums) {
       float mi=INT_MAX;
       float ans=0;
       int n=nums.size();
       sort(nums.begin(),nums.end());
        for(int i=0;i<n/2;i++){
            ans=(nums[i]+nums[n-1-i])/2.0;
            mi=min(ans,mi);
        }
        return mi;
    }
};