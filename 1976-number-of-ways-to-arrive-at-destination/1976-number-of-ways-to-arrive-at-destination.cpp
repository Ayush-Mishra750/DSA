class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        // first we create the adjacency list 
        int size=roads.size();
        int src=0;
        int dst=n-1;
        vector<vector<pair<int,int>>>adj(n);
        for(int i=0;i<roads.size();i++){
            int u=roads[i][0];
            int v=roads[i][1];
            int wt=roads[i][2];
            adj[u].push_back({v,wt});
            adj[v].push_back({u,wt});
        }
        //declare the priority queue
 priority_queue<
    pair<long long,int>,
    vector<pair<long long,int>>,
    greater<pair<long long,int>>
> pq;
        vector<long long>dist(n,LLONG_MAX);
        vector<long long>ways(n,0);
     
        ways[src]=1;
         int mod = (int)(1e9 + 7);
        dist[src]=0;
        pq.push({0,src});
        while(!pq.empty()){
            auto it=pq.top();
            long long dis=it.first;
            long long node=it.second;
            pq.pop();
                   if(dis > dist[node]) continue;
            for(auto it:adj[node]){
                long long nodeval=it.first;
                long long cost=it.second;
                if(dis+cost<dist[nodeval]){
                    dist[nodeval]=dis+cost;
                    pq.push({dis+cost,nodeval});
                    ways[nodeval]=ways[node];
                }
                else if(cost+dis==dist[nodeval]){
                    ways[nodeval]=(ways[nodeval]+ways[node])%mod;
                }
            }

        }
        return ways[n-1]%mod;
        

    }
};