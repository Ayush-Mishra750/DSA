class Solution {
    private:
    bool checkCycleDfs(int node,vector<int>& vis,vector<int>&pathvis,vector<int>&check,vector<vector<int>>& graph){
        vis[node]=1;
        pathvis[node]=1;
        check[node]=0;  
        for(auto it:graph[node]){
            if(!vis[it]){
               if( checkCycleDfs(it,vis,pathvis,check,graph)==true)return true;
            }
            else if(pathvis[it])return true;
           
        }
        check[node]=1;
        pathvis[node]=0;
        return false;
    }
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        //there are three step we have to do 
       // 1.check for visitd 
       //2.check for pathvis
       //3.check for cycle;
       int n=graph.size();
       vector<int>ans;
      vector<int>vis(n,0);
     vector<int>pathvis(n,0);
     vector<int>check(n,0);
       for(int i=0;i<n;i++){
        if(!vis[i]){
            checkCycleDfs(i,vis,pathvis,check,graph);
                
        }
       }
       for(int i=0;i<n;i++){
        if(check[i]==1)ans.push_back(i);
       }
       return ans;
    }
};