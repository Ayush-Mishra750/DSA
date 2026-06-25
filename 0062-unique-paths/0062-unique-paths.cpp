class Solution {
public:
    int uniquePaths(int m, int n) {
        int total=m+n-2;
        int mini=min(m-1,n-1);
     long long ans=1;
        for(int i=1;i<=mini;i++){
            ans=ans*(total-mini+i)/i;
        }
        return ans;
    }
};