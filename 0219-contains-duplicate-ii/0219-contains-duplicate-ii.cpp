class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
       unordered_map<int,int>mpp;
        
        int r=0;
        while(r<n){
           
            if(mpp.find(nums[r])!=mpp.end())
            {
               int  l=mpp[nums[r]];
               if(nums[l]==nums[r]&& abs(l-r)<=k)
               return 1;
              
            }
             mpp[nums[r]]=r;
            r++;
        }
   return 0;
        
    }
};