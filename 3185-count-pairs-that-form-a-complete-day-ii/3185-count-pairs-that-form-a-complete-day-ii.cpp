class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        map<int,int>mp;
        long long ans=0;
        long long int cnt=0;
        for(int i=0;i<hours.size();i++){
            int x=hours[i]%24;
            if(x==0){cnt++;continue;}
            int y=24-x;
            ans+=mp[y];
            mp[x]++;
        }
        cnt=(cnt*(cnt-1))/2;
        ans+=cnt;
        return ans;
    }
};