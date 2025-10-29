#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n=operations.size();
        stack<int>st;
        int total=0;
        for(int i=0;i<n;i++){
        string str=operations[i];
            if(str=="+"){
                int n1=st.top();
                st.pop();
                int n2=st.top();
                st.push(n1);
              int  sum=n1+n2;
                st.push(sum);

            }
            else if(str=="D"){
                int t=st.top();
                t=t*2;
                st.push(t);
            }
            else if(str=="C"){
            
                st.pop();
            }
            else {
                
                int num=stoi(str);
                st.push(num);
            }
        }
        while(!st.empty()){
            total+=st.top();
            st.pop();
        }
        return total;
    }
};
