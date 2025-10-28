#include<bits/stdc++.h>
using namespace std;

// vector<int>
void NextGreater(vector<int>nums1,vector<int>nums2){
   int n=nums1.size();
    int m=nums2.size();
    vector<int>ans;
    stack<int>st;
   unordered_map<int,int>mpp;

    for(int i=m-1;i>=0;i--){
        while(!st.empty()&& nums2[i]>st.top()) st.pop();

        if(st.empty()||st.top()<nums2[i]){
        mpp[nums2[i]]=-1;
    }
        else{
           mpp[nums2[i]]=st.top();
        }
        st.push(nums2[i]);
    }
    for(int i=0;i<n;i++){
        ans.push_back(mpp[nums1[i]]);
    }
    
   for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
}

int main(){
int n,m;
cout<<"enter the number";
cin>>n>>m;
vector<int>nums1(n);
vector<int>nums2(m);

for(int i=0;i<n;i++){
    cin>>nums1[i];
}
for(int i=0;i<m;i++){
    cin>>nums2[i];
}

NextGreater(nums1,nums2);



return 0;
}