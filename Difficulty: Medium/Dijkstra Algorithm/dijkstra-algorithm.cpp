class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        // Code here
        vector<pair<int,int>>adj[V];
        for( int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            int wt=edges[i][2];
            adj[u].push_back({v,wt});
            adj[v].push_back({u,wt});
        }
       set<pair<int,int>>st;
       st.insert({0,src});
        vector<int>dist(V,1e9);
        dist[src]=0;
        while(!st.empty()){
            auto it=*(st.begin());
            int dis=it.first;
            int node=it.second;
            st.erase(it);
            for(auto it :adj[node]){
                int adjnode=it.first;
                int wt=it.second;
                
                if(wt+dis <dist[adjnode]){
                    
                    if(dist[adjnode]!=1e9)
                    st.erase({dist[adjnode],adjnode});
                    
                    dist[adjnode]=wt+dis;
                    st.insert({dist[adjnode],adjnode});
                }
            }
        }
        return dist;
        
    }
};