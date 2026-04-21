class Solution {
public:
bool subset(int n,int t,vector<int>&arr, vector<vector<int>>&dp){
    if(t==0)return true;
    if(n==0)return arr[0]==t;
    if(dp[n][t]!=-1)return dp[n][t];
    
    bool nottake= subset(n-1,t,arr,dp);
     bool take=false;
     if(arr[n]<=t)
   take= subset(n-1,t-arr[n],arr,dp);
   return dp[n][t]= take ||nottake;
}

    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(sum%2!=0)return false;
      
        vector<vector<int>>dp(n,vector<int>(sum/2+1,-1));
     return  subset(n-1,sum/2,nums,dp);
    }

};