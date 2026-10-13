class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            int maxi=1;
            for(int j=i;j<n;j++){
                maxi=maxi*nums[j];
                ans=max(ans,maxi);
            }
        }
        return ans;
    }
};