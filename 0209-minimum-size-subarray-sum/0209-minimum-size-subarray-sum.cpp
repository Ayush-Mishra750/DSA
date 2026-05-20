class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int mini=INT_MAX;
        int len=INT_MAX;
        int sum=0;
        for(int right=0;right<n;right++){
            sum+=nums[right];
            while(sum>=target){
                if(right-left+1<len){
      len=right-left+1;
                }
                sum-=nums[left];
                left++;
            }
        }
        return len!=INT_MAX?len:0;
    }
};