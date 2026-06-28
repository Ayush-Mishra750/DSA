class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> ans(256, -1);
        int n = s.size();
        int l = 0, len = 0;
        int maxi = 0;
        for (int r = 0; r < n; r++) {
            if (ans[s[r]] >= l) {
                l = ans[s[r]] + 1;

            }
            ans[s[r]]=r;
            maxi=max(maxi,r-l+1);

        }
        return maxi;
    }


};