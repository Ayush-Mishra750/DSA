#include<bits/stdc++.h>
using namespace std;

class Solution{
     vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;                                                           
        deque<int>dq;
        for(int i=0;i<nums.size();i++){
            if(!dq.empty() && dq.front()<=i-k){
                dq.pop_front();
            }
            while(!dq.empty()&&arr[dq.back()]<arr[i]){
                st.pop_back();

            }
            dq.push_front(i);  
            if(i>=k-1){
                ans.push_back(arr[dq.front()]);
            }
        }
    return ans;
    }
};

int main(){
int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin<<arr[i];
}
Solution sol;
cout<<sol.maxSlidingWindow(arr);

return 0;
}