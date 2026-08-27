class Solution {
public:
  long long nCr(int n, int r){
    if(r > n-r) r = n-r; // optimize — chhota r lo

    long long result = 1;

    for(int i = 0; i < r; i++){
        result *= (n - i);
        result /= (i + 1);
    }

    return result;
}

int uniquePaths(int m, int n){
    return nCr(m+n-2, n-1);
}
};