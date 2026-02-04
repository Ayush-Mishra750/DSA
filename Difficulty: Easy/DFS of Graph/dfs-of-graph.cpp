class Solution {
    private:
            void dfsTraversal(int node,vector<vector<int>>& adj,int vis[],vector<int>&ans){
                vis[node]=1;
                ans.push_back(node);
                for(auto it:adj[node]){
                    if(!vis[it]){
                        dfsTraversal(it,adj,vis,ans);
                    }
                }
            }
            
  public:
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int n=adj.size();
        int start=0;
        int vis[n]={0};
        vector<int>ans;
        vis[0]=1;
        dfsTraversal(start,adj,vis,ans);
        return ans;
    }
};