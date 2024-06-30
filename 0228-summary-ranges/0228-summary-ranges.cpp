class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if(nums.size()==0)
            return vector<string>();
        int cnt=0;
        vector<string>vs;
        for(int i=0;i<nums.size();i++){
           int start=nums[i];
            while(i+1<nums.size() && nums[i]+1==nums[i+1]){
                i++;
            }
            if(start!=nums[i]){
                vs.push_back(to_string(start)+"->"+to_string(nums[i]));
            }else{
                vs.push_back(to_string(start));
            }
        }
        return vs;
    }
};