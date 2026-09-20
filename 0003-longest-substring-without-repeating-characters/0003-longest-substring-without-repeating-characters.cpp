class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int l=0;
        int r=0;
        int maxlen=0;
        vector<int>ans(256,-1);
        while(r<n){
            if(ans[s[r]]>=l){
              l=ans[s[r]]+1;
            }
            ans[s[r]]=r;
            maxlen=max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};