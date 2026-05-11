class Solution {
public:
int dp[101][101];
  int solve(int start_stick,int end_stick,vector<int>&cuts,int left,int right ){
    if(left>right)return 0;
    if(dp[left][right]!=-1)return dp[left][right];
    int cost=1e9;
    for(int k=left;k<=right;k++){
        int left_cost=solve(start_stick,cuts[k],cuts,left,k-1);
        int right_cost=solve(cuts[k],end_stick,cuts,k+1,right);
        int cur_cost=(end_stick-start_stick)+left_cost+right_cost;
        cost=min(cost,cur_cost);
    }

    return dp[left][right]= cost;
  }
    int minCost(int n, vector<int>& cuts) {
        memset(dp,-1,sizeof(dp));
        sort(cuts.begin(),cuts.end());
        return solve(0,n,cuts,0,cuts.size()-1);
    }
};