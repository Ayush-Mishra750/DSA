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
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<int>dist(V);
        for(int i=0;i<V;i++){
            dist[i]=1e9;
        }
        dist[src]=0;
        pq.push({0,src});
        while(!pq.empty()){
            int wt=pq.top().first;
            int node=pq.top().second;
            pq.pop();
              if(wt > dist[node]) continue;
            for(auto it:adj[node]){
                int distnode=it.second;
                int adjnode=it.first;
                if(wt+distnode<dist[adjnode]){
                    dist[adjnode]=distnode+wt;
                    pq.push({dist[adjnode],adjnode});
                }
            }
        }
        return dist;
    }
};