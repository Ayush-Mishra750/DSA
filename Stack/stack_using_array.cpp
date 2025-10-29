#include<bits/stdc++.h>
using namespace std;
class Mystack{

    int *arr;
    int top;
    int size;
    public:
    Mystack(){
      top=-1;
      size=1000;
      arr=new int[size];
    }
    void push(int x){
        top++;
        arr[top]=x;
    }
    int pop(){
        if(top<0)return -1;
        int ans=arr[top];
        top--;
        return ans;
    }
    int Top(){
        if(top<0)return -1;
        return arr[top];
    }
    int Size(){
        return top+1;
    }
};
int main(){
    Mystack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<st.Top()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.Size()<<endl;
    return 0;
}