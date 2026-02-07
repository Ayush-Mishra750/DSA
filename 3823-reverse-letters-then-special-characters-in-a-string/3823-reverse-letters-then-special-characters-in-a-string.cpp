class Solution {
public:
    string reverseByType(string s) {
        vector<char>st;
        vector<char>sp;
        string str;
       for(char c:s){
           if(c>='a'&& c<='z'){
               st.push_back(c);
           }
           else{
               sp.push_back(c);
           }
       }
        reverse(st.begin(),st.end());
        reverse(sp.begin(),sp.end());
        int j=0;
        int k=0;
        for(int i=0;i<s.size();i++){
             if(s[i]>='a'&&s[i]<='z'){
                 str.push_back(st[j]);
                 j++;
             }
            else{
                str.push_back(sp[k]);
                k++;
            }
        }
        return str;
    }
};