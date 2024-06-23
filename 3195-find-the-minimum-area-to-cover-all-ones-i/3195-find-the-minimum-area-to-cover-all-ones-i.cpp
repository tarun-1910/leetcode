class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int row=grid.size(),col=grid[0].size();
        int rmin=row,rmax=0,cmin=col,cmax=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1){
                    rmin=min(i,rmin);
                    rmax=max(i,rmax);
                    cmin=min(j,cmin);
                    cmax=max(j,cmax);
                }
            }
        }
        return (rmax-rmin+1)*(cmax-cmin+1);
    }
};