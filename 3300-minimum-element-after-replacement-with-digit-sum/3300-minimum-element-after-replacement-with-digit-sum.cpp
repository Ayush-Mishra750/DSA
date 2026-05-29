class Solution {
public:
     int findSum(int num){
        int n=num;
        int sum=0;
        while(n!=0){
            int ans=n%10;
            n=n/10;
            sum=sum+ans;
        }
        return sum;
     }
    int minElement(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MAX;
        for(int i=0;i<n;i++){

            int val=findSum(nums[i]);
            ans=min(ans,val);
        }
        return ans;
    }
};