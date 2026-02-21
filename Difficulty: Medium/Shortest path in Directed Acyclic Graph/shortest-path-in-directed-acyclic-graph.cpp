// User function Template for C++
class Solution {
    private:
    void toposort(int node,int vis[],stack<int>&st,vector<pair<int,int>>adj[]){
        vis[node]=1;
        for(auto it:adj[node]){
            int v=it.first;
            if(!vis[v]){
                toposort(v,vis,st,adj);
            }
        }
        st.push(node);
    }
  public:
    vector<int> shortestPath(int V, int E, vector<vector<int>>& edges) {
        // code here
      //create the graph
      vector<pair<int,int>>adj[V];
      for(int i=0;i<E;i++){
          int u=edges[i][0];
          int v=edges[i][1];
          int wt=edges[i][2];
          adj[u].push_back({v,wt});
      }
      
      //topo sort
      stack<int>st;
     int vis[V]={0};
      for(int i=0;i<V;i++){
          if(!vis[i]){
              toposort(i,vis,st,adj);
          }
      }
      
      //take all the element from the stack
    vector<int> dis(V);
    for(int i=0;i<V;i++){
        dis[i]=1e9;
    }
    
      dis[0]=0;
      while(!st.empty()){
          int node=st.top();
          st.pop();
          for(auto it:adj[node]){
             int v=it.first;
             int wt=it.second;
          if(dis[node] != 1e9 && dis[node] + wt < dis[v]){
                 dis[v]=dis[node]+wt;
             }
          }
          
      }
      for(int i=0;i<V;i++){
    if(dis[i]==1e9) dis[i] = -1;
}
    
      return dis;
    }
};
