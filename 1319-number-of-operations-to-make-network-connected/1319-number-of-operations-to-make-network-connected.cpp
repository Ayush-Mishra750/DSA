class DisjointSet{
public:
vector<int>size,parent ;
    DisjointSet(int n){
        parent.resize(n+1);
        size.resize(n+1,1);
        for(int i=0;i<n;i++){
            parent[i]=i;
        }
    }
    int findUParent(int node){
        if(node==parent[node])return node;
        return parent[node]=findUParent(parent[node]);
    }
    void unionBySize(int u,int v){
        int ulp_u=findUParent(u);
        int ulp_v=findUParent(v);
        if(ulp_u==ulp_v)return;
        if(size[ulp_u]<size[ulp_v]){
             parent[ulp_u]=ulp_v;
             size[ulp_v]+=size[ulp_u];
        }
        else{
            parent[ulp_v]=ulp_u;
             size[ulp_u]+=size[ulp_v];
        }

    }
};

class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        // logic extraedges>=cntcomponents-1 -->return cntcomponents-1 else return -1;
        DisjointSet ds(n);
        int cntextra=0;
      
            for(auto it:connections){
                int u=it[0];
                int v=it[1];
                if(ds.findUParent(u)==ds.findUParent(v)){
                    cntextra++;
                }
                else{
                    ds.unionBySize(u,v);
                }
            }
           

        
        int cnt=0;
        for(int i=0;i<n;i++){
            if(ds.parent[i]==i)cnt++;
        }
        int ans=cnt-1;
        if(cntextra>=ans)return ans;

        return -1;


             
    }
};