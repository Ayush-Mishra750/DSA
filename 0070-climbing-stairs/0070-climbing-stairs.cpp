class Solution {
public:
    int climbStairs(int n) {
     if (n <= 2) return n;  // Base cases

        int prev2 = 1, prev1 = 2;  // dp[1] = 1, dp[2] = 2

        for (int i = 3; i <= n; i++) {
            int curr = prev1 + prev2;  // Fibonacci relation
            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
    }
};