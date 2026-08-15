class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size();
        int xr=0;
        int cnt=0;
        for(auto it:nums){
            xr=xr^it;
            if(it==0){
                cnt++;
            }
        }
        if(xr!=0){
            return n;
        }
        if(cnt==n)return 0;

        return n-1;

    }
};