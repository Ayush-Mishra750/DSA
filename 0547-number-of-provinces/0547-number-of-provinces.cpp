class Solution {
    private:
    void dfs(int node,vector<vector<int>>& adj,vector<bool>&vis){
        vis[node]=1;
        for(int i=0;i<adj.size();i++){
            if(adj[node][i]==1 &&!vis[i]){
                dfs(i,adj,vis);
            }
        }
      
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        int ans=0;
        vector<bool>vis(n+1,0);
        for(int i=0;i<n;i++){
               if(!vis[i]){
                dfs(i,isConnected,vis);
                ans++;
               }
        }
        return ans;
    }
};