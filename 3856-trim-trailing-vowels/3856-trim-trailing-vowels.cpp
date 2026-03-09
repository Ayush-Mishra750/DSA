class Solution {
public:
    string trimTrailingVowels(string s) {
        string ans;
        int n=s.size();
        int cnt=-1;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                continue;
            }
            else {
                cnt=i;
                break;
            }
        }
        return s.substr(0,cnt+1);
    }
};