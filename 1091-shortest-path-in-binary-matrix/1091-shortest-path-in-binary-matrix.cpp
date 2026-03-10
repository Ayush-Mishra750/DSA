class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        if(grid[0][0]==1 ||grid[n-1][n-1]==1)return -1;
          if(n==1 )return 1;
        queue<pair<int,pair<int,int>>>q;
        vector<vector<int>>dist(n,vector<int>(n,1e9));
        q.push({1,{0,0}});
        dist[0][0]=1;
     int drow[] = {-1,-1,-1,0,0,1,1,1};
     int dcol[] = {-1,0,1,-1,1,-1,0,1};
        while(!q.empty()){
            int dis=q.front().first;
            int r=q.front().second.first;
            int c=q.front().second.second;
            q.pop();

            for(int i=0;i<8;i++){
                int delr=r+drow[i];
                int delc=c+dcol[i];
                if(delr>=0 && delr<=n-1 && delc>=0 && delc<=n-1 && grid[delr][delc]==0 && dis +1<dist[delr][delc]){
                    dist[delr][delc]=dis+1;
                    if(delr==n-1 && delc==n-1)return dis+1;
                    q.push({dis+1,{delr,delc}});
                }
            }

        }
        return -1;
    }
};