class Solution {
public:
    int countMonobit(int n) {
        int cnt=0;
        if(n>=0)cnt++;
        long long val=1;
       while(val<=n){
           cnt++;
           val=(val<<1)|1;
       }
        return cnt;
    }
};