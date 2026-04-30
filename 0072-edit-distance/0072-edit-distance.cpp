class Solution {
public:
   int LCS(string s1,string s2,int n,int m,vector<vector<int>>&dp){
         for(int i = 0; i <= n; i++) dp[i][0] = i;
        for(int j = 0; j <= m; j++) dp[0][j] = j;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=dp[i-1][j-1];
            }
            else{
                dp[i][j] = 1 + min({
                        dp[i-1][j],    // delete
                        dp[i][j-1],    // insert
                        dp[i-1][j-1]   // replace
                    });
            }
        }
    }
    return dp[n][m];
   }
    int minDistance(string word1, string word2) {
         int n=word1.size();
        int m=word2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        int lcs=LCS(word1,word2,n,m,dp);
       return lcs;
    }
};