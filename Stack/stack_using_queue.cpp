


#include<bits/stdc++.h>
using namespace std;

class Stack{
    queue<int>q;
    public:
  void  push(int x){
        int n=q.size();
        q.push(x);
        for(int i=0;i<n;i++){
            q.push(q.front());
            q.pop();
        }
    }

  int  pop(){
        int x=q.front();
        q.pop();
        return x;

    }
 int   top(){
        return q.front();
    }
  int  size(){
       return q.size();
    }
};

int main(){
Stack s;
s.push(10);
s.push(20);
s.push(30);
cout<<s.top()<<endl;
cout<<s.pop()<<endl;
cout<<s.top()<<endl;
cout<<s.size()<<endl;

return 0;
}