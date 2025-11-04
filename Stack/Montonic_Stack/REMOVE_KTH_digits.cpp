#include<bits/stdc++.h>
using namespace std;

 string removeKdigits(string num, int k) {
        stack<char>st;
        for(int i=0;i<num.size();i++){
            while(!st.empty()&& k>0 && (st.top()-'0'>num[i]-'0')){
                st.pop();
                k=k-1;
            }
            st.push(num[i]);
        }
        while (k>0)
        {
            st.pop();
            k--;
        }
        if(st.empty())return "0";

        string res="";

        while(!st.empty()){
            res=res+st.top();
            st.pop();
        }
        while(res.size()!=0 && res.back()=='0'){
            res.pop_back();
        }
        reverse(res.begin(),res.end());
        if(res.empty())return "0";

        return res;
        
    }

int main(){
int n,k;
cout<<"enter th e number";
cin>>n;
string arr="1432219";
cout<<"enter the k digit";
cin>>k;
string ans=removeKdigits(arr,k);
cout<<ans;

return 0;
}