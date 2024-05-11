class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& grid) {
        int row=grid.size();
        int column=grid[0].size();
    
        if(row==1&&column==1)return true;
       
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
               
                
             if(i<row-1 && grid[i][j] != grid[i + 1][j])
                 return false;
              if(j<column-1 &&grid[i][j] == grid[i][j + 1] )
                 return false;
         }
       }    
        return true;
    }
};