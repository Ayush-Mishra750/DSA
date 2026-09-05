class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        unordered_map<int,int>mpp;
        mpp[0]=1;
        int p_xor=0;
        int cnt=0;
        for(auto it:arr){
            p_xor=p_xor^it;
            
            int target=p_xor^k;
            
            if(mpp.find(target)!=mpp.end()){
                cnt+=mpp[target];
            }
            mpp[p_xor]++;
        }
        return cnt;
    }
};