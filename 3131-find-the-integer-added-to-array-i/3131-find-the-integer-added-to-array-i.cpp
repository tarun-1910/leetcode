class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        /*int sum1=0,sum2=0;
        for(int i=0;i<nums1.size();i++){
            sum1=sum1+nums1[i];
        }
        for(int i=0;i<nums2.size();i++){
            sum2=sum2+nums2[i];
        }
        cout<<sum1<<" "<<sum2<<endl;
        
        int res=0;
        int siz=nums1.size();
        res=(sum1-sum2)/siz;
        cout<<res<<endl;*/
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        
        return nums2[0]-nums1[0];
    
    }
};