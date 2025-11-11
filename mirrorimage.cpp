#include<bits/stdc++.h>
using namespace std;
int reverse(int val ){
   
    int res=0;
    while(val>0){
        int digit=val%10;
        if(digit==3)digit=3;
        else if(digit==6)digit=9;
        else if(digit==9)digit=6;
        res=res*10+digit;
        val=val/10;
    }

return res;
}
int main(){

int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,66,99,36,63};
int i=0;
vector<int>ans;
while(i<sizeof(arr)/sizeof(arr[0])){
    if(arr[i]%3==0){
    int answer= reverse(arr[i]);
        ans.push_back(answer);
    }
    i++;
}
for(auto it:ans){
    cout<<it<<" ";
}
return 0;
}