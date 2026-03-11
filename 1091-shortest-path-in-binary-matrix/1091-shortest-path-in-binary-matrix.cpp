class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        if(grid[0][0]==1 || grid[n-1][n-1]==1)return -1;
        if(n==1)return 1;
        queue<pair<int,pair<int,int>>>q;
        vector<vector<int>>dist(n,vector<int>(n,1e9));
          dist[0][0]=1;
          q.push({1,{0,0}});
          int drow[]={-1,-1,-1,0,1,1,1,0};
          int dcol[]={-1,0,1,1,1,0,-1,-1};
          while(!q.empty()){
            int dis=q.front().first;
            int r=q.front().second.first;
            int c=q.front().second.second;
        q.pop();
        for(int i=0;i<8;i++){
                 int row=r+drow[i];
                 int col=c+dcol[i];
                 if(row>=0 &&row<=n-1 && col>=0 &&col<=n-1 && grid[row][col]==0 && dis +1<dist[row][col]){
                    dist[row][col]=dis+1;
                    if(row==n-1 && col==n-1)return dis+1;
                    q.push({dis+1,{row,col}});
                 }
        }
          }
          return -1;
    }
};