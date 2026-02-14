class Solution {
    private:
    void dfs(int row,int col,vector<vector<int>>&grid){
        grid[row][col]=2;
         int n=grid.size();
        int m=grid[0].size();
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
        // check for all neighbours
        for(int i=0;i<4;i++){
            int nrow=row+drow[i];
            int ncol=col+dcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]==1){
                dfs(nrow,ncol,grid);
            }
        }
        return ;  
    }
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int cnt=0;

        for(int i=0;i<m;i++){
            if(grid[0][i]==1)dfs(0,i,grid);
            if(grid[n-1][i])dfs(n-1,i,grid);
        }
        for(int j=0;j<n;j++){
            if(grid[j][0]==1)dfs(j,0,grid);
            if(grid[j][m-1]==1)dfs(j,m-1,grid);
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1)
                cnt++;
            }
        }
        return cnt;
    }
};