//////////////////////////////////////////////////////?INFIX TO POSTFIX CONVERSION///////////////////////////////

// #include<bits/stdc++.h>
// using namespace std;
// int priority(char s){
//     if(s=='^')return 3;
//     else if(s=='*'||s=='/')return 2;
//     else if(s=='+'||s=='-')return 1;
//     else return -1;
// }

// int main(){
   
// string  s="a+b*(c^d-e)";
//     int n=s.size();
//    stack<char>st;
//    string ans;
//    int i=0;
//    while(i<n){
//        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9'))
//        ans+=s[i];
//        else if(s[i]=='('){
//            st.push(s[i]);
//        }
//        else if(s[i]==')'){
//            while(!st.empty()&&st.top()!='('){
//                ans+=st.top();
//                st.pop();
//            }
//            st.pop();
//        }
//        else{
//            while(!st.empty()&& priority(s[i])<=priority(st.top())){
//                ans+=st.top();
//                st.pop();
//            }
//            st.push(s[i]);
//        }
//        i++;
//    }
//    while(!st.empty()){
//        ans+=st.top();
//        st.pop();
//    }
   
//    cout<<ans;
//     return 0;
// }


////////////////////////////////////?INFIX TO PREFIX CONVERSION//////////////////////////////
// #include<bits/stdc++.h>
// using namespace std;
// int priority(char s){
//     if(s=='^')return 3;
//     else if(s=='*'||s=='/')return 2;
//     else if(s=='+'||s=='-')return 1;
//     else return -1;
// }

// int main(){
// string s=" (p+q)*(c-d)";
// string str;
// //////////////?step1:reverse infix
// for(int i=s.size()-1;i>=0;i--){
//     if(s[i]==')')
//     str+='(';
//     else if(s[i]=='(')
//     str+=')';
//     else 
//     str+=s[i];
// }
// cout<<str<<endl;
// //////////?step 2:convert infix to postfix////
// int i=0;
// int n=str.size();
// stack<char>st; 
// string ans="";
// while(i<n){
//            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9'))
//            ans+=s[i];

//            else if(s[i]=='('){
//                st.push(s[i]);
//            }
//            else if(s[i]==')'){
//                while(!st.empty()&&st.top()!='('){
//                    ans+=st.top();
//                    st.pop();
//                }
//                st.pop();
//            }

//            else{
//             if(s[i]=='^'){
//                while(!st.empty()&& priority(s[i])<=priority(st.top())){
//                    ans+=st.top();
//                    st.pop();
//                }
//             }
            
//              else{   while(!st.empty()&& priority(s[i])<=priority(st.top())){
//                     ans+=st.top();
//                     st.pop();
//                 }
//              }
//                st.push(s[i]);
//            }
//            i++;
//        }
//        while(!st.empty()){
//            ans+=st.top();
//            st.pop();
//        }
//        cout<<ans<<endl;
//        reverse(ans.begin(),ans.end());
//        cout<<ans;
       

// return 0;
// }

//////////////////////////////////////?postfix to infix conversion////////////////////////////
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="dc-qp+*";
    stack<char>st;
    int t1;
    int t2;
  
    for(int i=0;i<s.size();i++){
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9'))
     st.push(s[i]);

      else{
        t1=st.top();
        st.pop();
        t2=st.top();
        st.pop();
        char ans='('+t2+s[i]+t1+')';
                st.push(ans);
      }
}
cout<< st.top();
}