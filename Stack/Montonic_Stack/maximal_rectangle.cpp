#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int largestHistogram(vector<int>arr){
    int n=arr.size();
    int maxArea=0;
stack<int>st;
    int element;
    int nse,pse;
    for(int i=0;i<n;i++){
    while(!st.empty()&& arr[st.top()]>arr[i]){
        element=st.top();
        st.pop();
        nse=i;
        pse=st.empty()?-1:st.top();
        maxArea=max(maxArea,arr[element]*(nse-pse-1));
        
    }
    st.push(i);
    }

    while(!st.empty()){
        nse=n;
        element=st.top();
        st.pop();
        pse=st.empty()?-1:st.top();
         maxArea=max(maxArea,arr[element]*(nse-pse-1));
    }
   return  maxArea;
    }
    public:
     int maximalRectangle(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>> prefixSum(n,vector<int>(m));
        for(int j=0;j<m;j++){
          int   sum=0;
          for(int i=0;i<n;i++){
            sum+=matrix[i][j];
            if(matrix[i][j]==0){
                sum=0;
            }
            prefixSum[i][j]=sum;
          }
        }
        int maxArea=0;

        for(int i=0;i<n;i++){
      maxArea=max(maxArea,largestHistogram(prefixSum[i]));
        }
        return maxArea;

    }
};

int main(){
 vector<vector<int>> matrix = {
        {1, 0, 1, 0, 0}, 
        {1, 0, 1, 1, 1}, 
        {1, 1, 1, 1, 1}, 
        {1, 0, 0, 1, 0}
    };

    Solution sol;
 int ans=   sol.maximalRectangle(matrix);
 cout<<"answer:"<<ans;

return 0;
}