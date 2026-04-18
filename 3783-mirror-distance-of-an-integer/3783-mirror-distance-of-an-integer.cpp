class Solution {
public:
     long long reverse(int n){
        long long ans=0;
        while(n!=0){
            int a=n%10;
            n=n/10;
            ans=ans*10+a;
        }
        return ans;
     }
    int mirrorDistance(int n) {
        int val=n;
       long long rev_val= reverse(val);
       return abs(n-rev_val);
    }
};