class Solution {
public:
long long reverse(long long n){
   long long ans=0;
    while(n!=0){
        int a=n%10;
        n=n/10;
        ans=ans*10+a;
    }
    return ans;
}
    int minMirrorPairDistance(vector<int>& nums) {
         int n=nums.size();
         unordered_map<long long,int>mpp;
         int mini=INT_MAX;

         for(int i=n-1;i>=0;i--){
            long long currval=reverse(nums[i]);
            if(mpp.find(currval)!=mpp.end()){
                mini=min(mini,abs(mpp[currval]-i));
            }
            mpp[nums[i]]=i;

         }    
         return mini==INT_MAX?-1:mini;
    }
};