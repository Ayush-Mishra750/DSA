class Solution {
public:
    int maximumSaleItems(vector<vector<int>>& items, int budget) {
        int n=items.size();
        auto arr=items;
        vector<int>ans(n,0);
          for (int i = 0; i < n; i++) {
            int fi = items[i][0];

            for (int j = 0; j < n; j++) {
                if (i == j) continue;

                int fj = items[j][0];

                if (fj % fi == 0) {
                    ans[i]++;
                }
            }
        }
        vector<int>dp(budget+1,0);
         for (int i = 0; i < n; i++) {
            int cost = items[i][1];
            int firstValue = 1 + ans[i];

           
            for (int b = budget; b >= cost; b--) {
                dp[b] = max(dp[b], dp[b - cost] + firstValue);
            }

           
            for (int b = cost; b <= budget; b++) {
                dp[b] = max(dp[b], dp[b - cost] + 1);
            }
        }
        return *max_element(dp.begin(),dp.end());
    }
};