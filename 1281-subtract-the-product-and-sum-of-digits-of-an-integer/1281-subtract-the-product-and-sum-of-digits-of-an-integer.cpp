class Solution {
public:
int solve(int n){
    long long mul=1;
    int sum=0;
    while(n!=0){
        int a=n%10;
        n=n/10;
        sum=sum+a;
        mul=mul*a;
    }
    return mul-sum;
}
    int subtractProductAndSum(int n) {
        return solve(n);
    }
};