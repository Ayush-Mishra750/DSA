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
    int minimumHammingDistance(vector<int>& source, vector<int>& target, vector<vector<int>>& allowedSwaps) {
      int n=source.size();
      DisjointSet ds(n);
       for(auto it:allowedSwaps){
        ds.unionBySize(it[0],it[1]);
       }
       unordered_map<int ,vector<int>>mpp;
     for(int i=0;i<n;i++){
        mpp[ds.findUParent(i)].push_back(i);
     }
     int ans=0;
     for(auto& [p,indx]:mpp){
        unordered_map<int,int>freq;
        for(auto i:indx){
            freq[source[i]]++;
        }
        for(auto it:indx){
            if(freq[target[it]]>0){
                freq[target[it]]--;
            }
            else{
                ans++;
            }
        }
     }
     return ans;
       
    }
};