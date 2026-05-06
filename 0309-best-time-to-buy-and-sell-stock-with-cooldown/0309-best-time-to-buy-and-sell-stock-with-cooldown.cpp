class Solution {
public:
    int findans(vector<int>&prices,int ind,int n,int buy,vector<vector<int>>&dp){
        //base cases
        if(ind>=n)return 0;
        if(dp[ind][buy]!=-1)return dp[ind][buy];

        int profit;
        if(buy==0){
            profit=max(0+findans(prices,ind+1,n,0,dp),-prices[ind]+findans(prices,ind+1,n,1,dp));
        }
        if(buy==1){
            profit=max(0+findans(prices,ind+1,n,1,dp),prices[ind]+findans(prices,ind+2,n,0,dp));
        }
        return dp[ind][buy]=profit;
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        return findans(prices,0,n,0,dp);
    }
};