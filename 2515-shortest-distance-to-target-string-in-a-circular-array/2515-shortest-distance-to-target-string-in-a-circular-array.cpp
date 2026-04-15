class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int l=startIndex;
        int r=startIndex;
        int ans=0;
        int n=words.size();
        while(true){
            if(words[l]==target ||words[r]==target)return ans;

            l=(l-1+n)%n;
            r=(r+1)%n;
            ans++;
            if(l==r){
                if(words[l]==target)return ans;
                break;
            }

        }
        return -1;
    }
};