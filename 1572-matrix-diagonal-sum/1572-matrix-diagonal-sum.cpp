class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
       int n=mat.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            cnt+=mat[i][i];
        }
        for(int i=0;i<n;i++){
            if(i!=n-1-i){
                cnt+=mat[i][n-1-i];
            }
        }
        return cnt;
    }
};