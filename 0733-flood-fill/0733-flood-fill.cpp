 class Solution {
    private:
    void bfs(vector<vector<int>>& image,int sr,int sc,int color,vector<vector<int>>& vis,int originalval){
          int n=image.size();
         int m=image[0].size();
        vis[sr][sc]=1;
        queue<pair<int,int>>q;
        image[sr][sc]=color;
        q.push({sr,sc});
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
               for(int i=0;i<4;i++){
                int nrow=row+drow[i];
                int ncol=col+dcol[i];
                if(nrow>=0 &&nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && image[nrow][ncol]==originalval){
                    vis[nrow][ncol]=1;
                    image[nrow][ncol]=color;
                    q.push({nrow,ncol});
                }
}
        }

    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
         int n=image.size();
         int m=image[0].size();
         int valcolor=image[sr][sc];
         vector<vector<int>>vis(n,vector<int>(m,0));
        bfs(image,sr,sc,color,vis,valcolor);
        return image;
    }
};