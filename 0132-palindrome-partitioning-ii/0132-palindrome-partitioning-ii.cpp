class Solution {
public:

    int minCut(string s) {

        int n = s.size();

        vector<vector<bool>> pal(n, vector<bool>(n, false));

        // Palindrome preprocessing
        for(int i = n - 1; i >= 0; i--) {

            for(int j = i; j < n; j++) {

                if(s[i] == s[j] &&
                   (j - i <= 2 || pal[i+1][j-1])) {

                    pal[i][j] = true;
                }
            }
        }

        vector<int> dp(n, 0);

        for(int i = 0; i < n; i++) {

            // whole substring palindrome
            if(pal[0][i]) {
                dp[i] = 0;
            }
            else {

                dp[i] = INT_MAX;

                for(int j = 0; j < i; j++) {

                    // right part palindrome
                    if(pal[j+1][i]) {

                        dp[i] = min(dp[i], dp[j] + 1);
                    }
                }
            }
        }

        return dp[n-1];
    }
};