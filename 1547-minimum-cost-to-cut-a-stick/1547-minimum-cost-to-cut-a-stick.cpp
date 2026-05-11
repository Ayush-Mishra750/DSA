class Solution {
public:
int dp[102][102];
  int solve(vector<int>&cuts,int left,int right ){
    if(right-left<=1)return 0;
    if(dp[left][right]!=-1)return dp[left][right];
    int cost=1e9;
    for(int k=left+1;k<=right-1;k++){
        int left_cost=solve(cuts,left,k);
        int right_cost=solve(cuts,k,right);
        int cur_cost=(cuts[right]-cuts[left])+left_cost+right_cost;
        cost=min(cost,cur_cost);
    }

    return dp[left][right] =cost;
  }
    int minCost(int n, vector<int>& cuts) {
        memset(dp,-1,sizeof(dp));
        cuts.push_back(0);
        cuts.push_back(n);
        sort(cuts.begin(),cuts.end());
        return solve(cuts,0,cuts.size()-1);
    }
};