class Solution {
    private:
    void bfs(vector<vector<char>>& grid,vector<vector<int>>&vis,int r,int c){
         int n=grid.size();
        int m=grid[0].size();
        vis[r][c]=1;
        queue<pair<int,int>>q;
        q.push({r,c});
           int dr[4] = {-1, 0, 1, 0};
int dc[4] = {0, 1, 0, -1};
        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            //traverse all the 8 neighours
         
            // for(int delrow=-1;delrow<=1;delrow++){
            //     for(int delcol=-1;delcol<=1;delcol++){
            //          int nrow=row+delrow;
            //          int ncol=col+delcol;
            //          if(nrow>=0 &&nrow<n &&ncol>=0 &&ncol<m &&  grid[nrow][ncol]=='1' &&!vis[nrow][ncol]){
            //             vis[nrow][ncol]=1;
            //             q.push({nrow,ncol});
            //          }
            //     }
            // }
            

for(int k = 0; k < 4; k++){
    int nrow = row + dr[k];
    int ncol = col + dc[k];

    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m &&
       grid[nrow][ncol]=='1' && !vis[nrow][ncol]){
        vis[nrow][ncol] = 1;
        q.push({nrow, ncol});
    }
}

        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j] && grid[i][j]=='1'){
                cnt++;
                bfs(grid,vis,i,j);
            }
        }
    }
    return cnt;
    }
};