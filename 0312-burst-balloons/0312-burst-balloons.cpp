class Solution {
public:
  int solve(int i,int j,vector<int>&arr,vector<vector<int>>&dp){
    if(i+1==j)return 0;

    if(dp[i][j]!=-1)return dp[i][j];
    int ans=0;
    for(int k=i+1;k<j;k++){
        int cost=arr[i]*arr[k]*arr[j];
        int left=solve(i,k,arr,dp);
        int right=solve(k,j,arr,dp);
        ans=max(ans,cost+left+right);
    }
    return dp[i][j]=ans;
  }
    int maxCoins(vector<int>& nums) {
         int n=nums.size();
         vector<int>arr;
         arr.push_back(1);
         for(auto it:nums){
            arr.push_back(it);
         }
         arr.push_back(1);
         vector<vector<int>>dp(arr.size()+1,vector<int>(arr.size()+1,-1));
         return solve(0,arr.size()-1,arr,dp);
    }
};