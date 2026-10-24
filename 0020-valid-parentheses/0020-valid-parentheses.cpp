class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
            st.push(s[i]);
            else{
                if(st.empty())return 0;
                char ch=st.top();
                st.pop();
        if(ch=='('&&s[i]==')'||ch=='{'&&s[i]=='}'||ch=='['&&s[i]==']'){
                    
                    continue;
                }
                else return 0;
            
            }
        }
        

        return st.empty();
        
    }
};