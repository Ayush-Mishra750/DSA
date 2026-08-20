class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        vector<int>st(26,0);
        int l=0;
        int ans=0;
        int maxi=0;
    for(int r=0;r<n;r++){
        st[s[r]-'A']++;
        maxi=max(maxi,st[s[r]-'A']);
        while((r-l+1)-maxi>k){
            st[s[l]-'A']--;
            l++;
        }
        ans=max(ans,r-l+1);
    }
        return ans;
        
    }
};