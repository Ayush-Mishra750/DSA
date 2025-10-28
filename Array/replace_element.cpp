<<<<<<< HEAD
///Replace Elements with Greatest Element on Right Side

// Given an array arr, replace every element in that array with the greatest element among the elements to its right, and replace the last element with -1.

// After doing so, return the array.

 

// Example 1:

// Input: arr = [17,18,5,4,6,1]
// Output: [18,6,6,6,1,-1]
// Explanation: 
// - index 0 --> the greatest element to the right of index 0 is index 1 (18).
// - index 1 --> the greatest element to the right of index 1 is index 4 (6).
// - index 2 --> the greatest element to the right of index 2 is index 4 (6).
// - index 3 --> the greatest element to the right of index 3 is index 4 (6).
// - index 4 --> the greatest element to the right of index 4 is index 5 (1).
// - index 5 --> there are no elements to the right of index 5, so we put -1.

#include<bits/stdc++.h>
using namespace std;

vector<int>replace(vector<int>arr){
    int n=arr.size();
    vector<int>ans(n);
    int max=arr[n-1];
    for(int i=n-2;i>=0;i--){
         ans[i]=max;
         if(max<arr[i]){
            max=arr[i];
         }

    }
    ans[n-1]=-1;
    return ans;
}
int  main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   arr= replace(arr);
   for(int i=0;i<n;i++){
    cout<<arr[i];
   }
=======
///Replace Elements with Greatest Element on Right Side

// Given an array arr, replace every element in that array with the greatest element among the elements to its right, and replace the last element with -1.

// After doing so, return the array.

 

// Example 1:

// Input: arr = [17,18,5,4,6,1]
// Output: [18,6,6,6,1,-1]
// Explanation: 
// - index 0 --> the greatest element to the right of index 0 is index 1 (18).
// - index 1 --> the greatest element to the right of index 1 is index 4 (6).
// - index 2 --> the greatest element to the right of index 2 is index 4 (6).
// - index 3 --> the greatest element to the right of index 3 is index 4 (6).
// - index 4 --> the greatest element to the right of index 4 is index 5 (1).
// - index 5 --> there are no elements to the right of index 5, so we put -1.

#include<bits/stdc++.h>
using namespace std;

vector<int>replace(vector<int>arr){
    int n=arr.size();
    vector<int>ans(n);
    int max=arr[n-1];
    for(int i=n-2;i>=0;i--){
         ans[i]=max;
         if(max<arr[i]){
            max=arr[i];
         }

    }
    ans[n-1]=-1;
    return ans;
}
int  main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   arr= replace(arr);
   for(int i=0;i<n;i++){
    cout<<arr[i];
   }
>>>>>>> 450ca543d1469492c04b8784b108feb23bdd058d
}