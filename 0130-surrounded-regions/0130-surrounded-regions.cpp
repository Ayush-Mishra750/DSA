class Solution {
    private:
    void dfs(int row,int col,vector<vector<char>>& board){
        int n=board.size();
        int m=board[0].size();
        board[row][col]='#';
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
        for(int i=0;i<4;i++){
            int nrow=row+drow[i];
            int ncol=col+dcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && board[nrow][ncol]=='O'){
                dfs(nrow,ncol,board);
            }
            else continue;
        }
        return ;
    }
public:
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
           for(int i=0;i<m;i++){
            if(board[0][i]=='O')dfs(0,i,board);
            if(board[n-1][i]=='O')dfs(n-1,i,board);
           }
           for(int j=0;j<n;j++){
            if(board[j][0]=='O')dfs(j,0,board);
            if(board[j][m-1]=='O')dfs(j,m-1,board);
           }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(board[i][j]=='#'){
                board[i][j]='O';
            }
            else if(board[i][j]=='O'){
                board[i][j]='X';
            }
            else continue;
        }
    }
    return ;
    }
};