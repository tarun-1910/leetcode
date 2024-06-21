class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 0);
        vector<int> count(101, 0);
        
        // Count the frequency of each number in nums
        for(int i = 0; i < n; ++i) {
            count[nums[i]]++;
        }
        
        // Create the prefix sum to get the count of numbers less than the current number
        for(int i = 1; i < 101; ++i) {
            count[i] += count[i - 1];
        }
        
        // Construct the result using the prefix sum array
        for(int i = 0; i < n; ++i) {
            if(nums[i] == 0) {
                ans[i] = 0;
            } else {
                ans[i] = count[nums[i] - 1];
            }
        }
        
        return ans;
    }
};

