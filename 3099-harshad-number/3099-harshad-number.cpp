class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int n=x;
       int sum=0;
        while(n!=0){
            int val=n%10;
            n=n/10;
            sum=sum+val;
        }
        if(x%sum!=0)return -1;
        return sum;
    }
};