class Solution {
public:
    int canPartition(vector<int>& nums,int t) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if((sum+t)%2!=0|| abs(t)>sum)return false;
      int newtarget=(sum+t)/2;
        vector<vector<int>>dp(n+1,vector<int>(newtarget+1,0));
        for(int i=0;i<=n;i++)
           dp[i][0]=1;

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
    int findTargetSumWays(vector<int>& nums, int target) {
        return canPartition(nums,target);
    }
};