class Solution {
public:
    long long countCommas(long long n) {
        if(n<999)return 0;
        long long ans=0;
        long long base=1000;
        long long com=1;
        while(base<=n){
            long long nxt=base*1000;
            long long count=min(n,nxt-1)-base+1;
            if(count>0){
                ans+=count*com;
            }
            com++;
            base=nxt;
        }
        return ans;
    }
};