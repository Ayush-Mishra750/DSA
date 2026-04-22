class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        int n=queries.size();
        int m=dictionary.size();
        vector<string>ans;
        for(int i=0;i<n;i++){
            string s=queries[i];
            for(int j=0;j<m;j++){
                  string str=dictionary[j];
                  int cnt=0;
                for(int k=0;k<s.size();k++){
                    if(s[k]!=str[k]){
                        cnt++;
                         if (cnt > 2) break; 
                    }

                }
                if(cnt<=2){
                    ans.push_back(s);
                    break;
                }
            }
        }
return ans;
    }
};