class DisjointSet{
    public:
    vector<int>size,parent;

    DisjointSet(int n){
        size.resize(n+1,1);
        parent.resize(n+1);
        for(int i=0;i<=n;i++){
            parent[i]=i;
        }
    }
    
    //!Find ultimate parent of a node
    int findUparent(int node){
        if(node==parent[node]){
            return node;
        }
        return parent[node]=findUparent(parent[node]);
    }
    void unionBySize(int u,int v){
        int ulp_u=findUparent(u);
        int ulp_v=findUparent(v);
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
    int removeStones(vector<vector<int>>& stones) {
        int r=0;
        int c=0;
        int n=stones.size();
        for(auto it:stones){
            r=max(r,it[0]);
            c=max(c,it[1]);
        }
        DisjointSet ds(r+c+1);
        unordered_map<int ,int>mpp;
        for(auto it:stones){
            int row=it[0];
            int col=it[1]+r+1;
            ds.unionBySize(row,col);
            mpp[row]=1;
            mpp[col]=1;

        }
        int cnt=0;
        for(auto it:mpp){
            if(ds.findUparent(it.first)==it.first){
                cnt++;
            }
        }
        return n-cnt;
    }
};