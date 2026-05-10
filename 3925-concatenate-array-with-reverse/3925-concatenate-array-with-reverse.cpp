class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(2*n);
        int l=0;
        int r=2*n-1;
        for(int i=0;i<n;i++){
         ans[i]=ans[2*n-i-1]=nums[i];
        }
        return  ans;
    }
};