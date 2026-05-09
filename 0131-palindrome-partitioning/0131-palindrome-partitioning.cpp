class Solution {
public:
bool ispalindrome(string &s,int i,int j){
    while(i<j){
        if(s[i++]!=s[j--]){
            return false;
        }
    }
    return true;
}
   void solve(string &s,int i,vector<string>&temp,vector<vector<string>>&ans){
    int n=s.size();
     if(i==n){
        ans.push_back(temp);
     }
     else{
        for(int j=i;j<n;j++){
            if(ispalindrome(s,i,j)==true){
                temp.push_back(s.substr(i,j-i+1));
                solve(s,j+1,temp,ans);
                temp.pop_back();
            }
        }
     }
   }
    vector<vector<string>> partition(string s) {
       int n=s.size();
       vector<vector<string>>ans;
       vector<string>temp; 
       solve(s,0,temp,ans);
       return ans;
    }
};