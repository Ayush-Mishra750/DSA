class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int profit=0;
      int n=prices.size();
      int maxi=prices[0];
      for(int i=1;i<n;i++){
        int cost=prices[i]-maxi;
        profit=max(profit,cost);
        maxi=min(maxi,prices[i]);
      }
      return profit;
    }
};