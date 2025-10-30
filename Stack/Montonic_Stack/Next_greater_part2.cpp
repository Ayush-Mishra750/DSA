#include<bits/stdc++.h>
using namespace std;

void nextGreaterElement(vector<int>&arr){
    int n=arr.size();
    stack<int>st;
    vector<int>ans(n);
    for(int i=2*n-1;i>=0;i--){
        while(!st.empty() && st.top()<=arr[i%n]){
            st.pop();
        }
        if(i<n){
            ans[i]=st.empty()?-1:st.top();
        }
        st.push(arr[i%n]);
    }

    for(int i=0;i<ans.size();i++){
    cout<<ans[i];
}
return ;
}

int main(){
int n;
cout<<"enter the nnumber";
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
nextGreaterElement(arr);


return 0;
}