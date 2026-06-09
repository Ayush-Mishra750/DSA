class Solution {
public:
    int digitFrequencyScore(int n) {
        int num=n;
        int sum=0;
        while(num!=0){
            int a=num%10;
            num=num/10;
            sum=sum+a;
        }
        return sum;
        
    }
};