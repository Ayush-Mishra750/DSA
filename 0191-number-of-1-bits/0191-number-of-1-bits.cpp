class Solution {
public:
    int hammingWeight(int n) {
        int cnt=0;
          while(n!=0){
         int val=n%2;
         n=n/2;
         if(val==1)cnt++;
        }
        return cnt;
    }
};