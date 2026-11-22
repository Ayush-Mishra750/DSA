class Solution {
public:
    bool isPalindrome(int x) {
        int flag=0;
         int n=x;
         long long ans=0;
         if(n<0){
            flag=1;
            return 0;
         }
         while(n!=0){
            int val=n%10;
            n=n/10;
            ans=ans*10+val;
         }
         if(ans!=x){
            flag=1;
         }
         return flag==1?0:1;


    }
};