class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        unordered_set<int> mp;
        int n = digits.size();

        for(int i = 0 ; i<n ; i++){
            if(digits[i] %2 != 0) continue;
            for(int j = 0; j<n ; j++){
                if(j==i) continue;
                for(int k =0; k<n ; k++){
                    if(k==j|| k==i) continue;
                    if(digits[k] == 0) continue;

                    int result = digits[k]*100 + digits[j]*10 + digits[i];
                    mp.insert(result);
                }
            }
        }
        return mp.size();
    }
};