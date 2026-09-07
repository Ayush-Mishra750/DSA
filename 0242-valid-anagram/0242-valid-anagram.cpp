class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>ans(256,0);
        if(s.size()!=t.size())
        return 0;
        int n=s.size();
        for(int i=0;i<n;i++){
            ans[s[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            ans[t[i]-'a']--;
        }
        for(int i=0;i<256;i++){
            if(ans[i]!=0)
            return 0;
            else continue;
        }
        return 1;
    }
};