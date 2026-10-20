class Solution {
public:
    int reverse(int x) {
        long long ans=0;
        while(x!=0){
            int val=x%10;
            x=x/10;
            ans=ans*10+val;
        }
          bool pos=(x>0)?true:false;
        bool neg=(x<0)?true:false;
      long long sum=(pos)?-ans:ans;
         sum=(sum>INT_MAX)?0:sum;
        sum=(sum<INT_MIN)?0:sum;
        return sum;
    }
};