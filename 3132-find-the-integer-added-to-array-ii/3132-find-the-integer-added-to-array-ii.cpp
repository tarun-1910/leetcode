class Solution {
public:
    int minimumAddedInteger(vector<int>& nums1, vector<int>& nums2) {
           int ans=INT_MAX;
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    int n=nums1.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
           int cnt=0;
           int temp;
           bool f=true;
           for(int k=0;k<n;k++){
               if(i==k || j==k) continue;
               if(cnt==0){
                   temp=nums2[cnt]-nums1[k];
               }else{
                 int temp2=nums2[cnt]-nums1[k];
                 if(temp!=temp2) {
                     f=false;
                     break;
                 }
                   
               }
               cnt++;
           }
         // if(temp==0&&f) return temp;
          if(f) ans=min(ans,temp);
        }
    }
        
    return ans;

    }
};