#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        int n=heights.size();
        int elements;
        int nse;
        int pse;
        int maxArea=0;
        for(int i=0;i<n;i++){
            while(!st.empty()&& heights[st.top()]>heights[i]){
                elements=st.top();
                st.pop();
                nse=i;
                pse=st.empty()?-1:st.top();
                maxArea=max(maxArea,(heights[elements]*(nse-pse-1)));
            }
       st.push(i);
        }
    
    while(!st.empty()){
        nse=n;
        elements=st.top();
        st.pop();
        pse=st.empty()?-1:st.top();
        maxArea=max(maxArea,(heights[elements]*(nse-pse-1)));
    }
return maxArea;
}
};
int main(){
int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
Solution sol;
int ans=sol.largestRectangleArea(arr);
cout<<ans;

return 0;
}