class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.size();
        unordered_map<int,int>mpp;
        int i=0;
        int j=0;
        int maxi=0;
        while(i<n){
            mpp[s[i]]++;
             while (mpp[s[i]] > 2) {
                mpp[s[j]]--;
                j++;
            }
          
            int len = i - j + 1;
            maxi = max(maxi, len);
            i++;
        }
        return maxi;
    }
};