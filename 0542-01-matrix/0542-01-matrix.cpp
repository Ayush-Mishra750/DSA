class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
           if (mat.empty() || mat[0].empty())
            return {};
        int n=mat.size();
        int m=mat[0].size();
        int maxSize=m*n;
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    q.push({i,j});
                }
                else{
                    mat[i][j]=maxSize;
                }
            }
        }
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            //traverse all the neighours
            for(int i=0;i<4;i++){
                int r=row+drow[i];
                int c=col+dcol[i];
                if(r>=0 && r<n && c>=0 && c<m && mat[r][c]>mat[row][col]+1){
                    q.push({r,c});
                    mat[r][c]=mat[row][col]+1;
                }
            }
        }
        return mat;

    }
};