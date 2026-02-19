class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        vector<int> adj[n];
        vector<int>indegree(n,0);
        queue<int>q;
//create adjancey list
        for(auto it:prerequisites){
            adj[it[0]].push_back(it[1]);
            indegree[it[1]]++;
        }
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        vector<int>ans;
        while(!q.empty()){
            int node=q.front();
            ans.push_back(node);
            q.pop();
            for(auto it:adj[node]){
                indegree[it]--;
                if(indegree[it]==0)q.push(it);
            }
        }
        if(ans.size()==n)return 1;

        return 0;

    }
};