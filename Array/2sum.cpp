                                                                //Brute solution
//  #include<iostream>
//  #include<bits/stdc++.h>
//   using namespace std;
//  vector<int> sum(vector<int> a,int k){
//    int n=a.size();
//    int sum;
//    int b,t;
//    for(int i=0;i<n;i++)
//    { 
//      for(int j=i+1;j<n;j++)
//      {
//          sum=0;
//         sum=a[i]+a[j];
//         if(sum==k){
//              t=j;
//             break;
//         }
//      }
//      if(sum==k)
//      {
//            cout<<"yes";
//            cout<<i<<endl<<t;
//             break;
//         }
       

//    }
//     if(sum!=k)
//         cout<<"no";
   
//  }
//  int main(){
//  int n,k;
//  cout<<"enter the number";
//  cin>>n;
//  vector<int> a(n);
//  for(int i=0;i<n;i++){
//     cin>>a[i];
//  } 
//   cout<<"enter the target number";
//  cin>>k;

//  sum(a,k);
//  return 0;
//  }
                          // better or optimal solution
//   Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

 

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]


// Approach :-> 1.  using the hash mapp to store the element .
// 2.here we detect the target value  by adding  two number  and store the subtract value into mapp


 #include<iostream>
 #include<bits/stdc++.h>
  using namespace std;
 vector<int> sum(vector<int> a,int k){
  map<int ,int>mpp;
  for(int i=0;i<a.size();i++){
    int num=a[i];
    int more=k-num;
   if (mpp.find(more) != mpp.end()) {
            return {mpp[more], i};
        }
        mpp[num] = i;
    }
    return { -1, -1};
  
  }
  int main(){
 int n,k;
 cout<<"enter the number";
 cin>>n;
 vector<int> a(n);
 for(int i=0;i<n;i++){
    cin>>a[i];
 } 
  cout<<"enter the target number";
 cin>>k;

 vector<int> ans(2); 
 ans= sum(a,k);
  cout << "This is the answer for variant 2: [" << ans[0] << ", "
         << ans[1] << "]" << endl;
 return 0;
 }