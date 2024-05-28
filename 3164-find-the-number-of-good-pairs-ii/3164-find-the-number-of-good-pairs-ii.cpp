class Solution {
public:
    vector<int> factor(int n){
        vector<int> vp;  
        for(int i=1;i*i<=n;i++){
            if(n%i==0&&i*i!=n){
                vp.push_back(i);
                vp.push_back(n/i);
            }else if(n%i==0){
                vp.push_back(i); 
            }
        }
        
     return vp;
    }
    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
    for(int i=0;i<nums2.size();i++){
        nums2[i]=nums2[i]*k;
    }
    map<int,int> mp;
    sort(nums2.begin(),nums2.end());
    long long int cnt=0;
    for(int i=0;i<nums1.size();i++){
        if(nums1[i]%k==0){
          vector<int> vp = factor(nums1[i]);
          if(mp.find(nums1[i])!=mp.end()) {
              cnt+=mp[nums1[i]];
              continue;
          }
         int ans=0;
          for(auto it: vp){
               int low =lower_bound(nums2.begin(),nums2.end(),it)-nums2.begin();
               int  up=upper_bound(nums2.begin(),nums2.end(),it)-nums2.begin();
            ans+= up-low;
          }
        
        mp[nums1[i]]=ans;
        cnt+=ans;
       cout<<cnt<<endl;
        }
    }
        return cnt;
    }
};