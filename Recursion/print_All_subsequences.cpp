///? here we using recursion to print all subsequences of a string
#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int i,int n,vector<int> &ans ){
    if(i==n){
        for(auto it:ans){
            cout<<it<<" ";
           
        }
        cout<<endl;
        return;
    }
    print(arr,i+1,n,ans);
    ans.push_back(arr[i]);
    print(arr,i+1,n,ans);
    ans.pop_back();
}

int main(){
int n;
int arr[]={3,1,2};
vector<int>ans;
print(arr,0,3,ans);

return 0;
}