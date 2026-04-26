class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int sum=accumulate(nums.begin(),nums.end(),0);

      if((sum+target)%2!=0 ||abs(target)>sum)return 0;
        int newtarget=(sum+target)/2;
      vector<vector<int>>dp(n+1,vector<int>(newtarget+1,0));

      for(int i=0;i<n;i++){
        dp[i][0]=1;
      }

      for(int i=1;i<=n;i++){
        for(int j=0;j<=newtarget;j++){
            dp[i][j]=dp[i-1][j];
            if(nums[i-1]<=j){
                dp[i][j]+=dp[i-1][j-nums[i-1]];
            }
        }
      }
      return dp[n][newtarget];
    }
};