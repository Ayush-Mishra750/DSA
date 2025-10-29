///ther are two approach to implements the queue using stack 

//First approach
//////////////////////////////////////////////////////?APPROACH 1(MORE PUSH AND LESS POP AND TOP OPERATION)////////////////////////////////////////////////
#include<bits/stdc++.h>
using namespace std;
class Stack{
stack<int>s1,s2;
public:
void push(int x){
    while(s1.size()){
        s2.push(s1.top());
        s1.pop();
    }
    s1.push(x);
    while(s2.size()){
        s1.push(s2.top());
        s2.pop();
    }
}
int pop(){
    int x=s1.top();
    s1.pop();
    return x;
}
int Top(){
    return s1.top();
}
int size(){
    return s1.size();
}
};

int main(){
 Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.Top()<<endl;
    cout<<s.pop()<<endl;
    s.push(40);
    s.push(50);
    cout<<s.size()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    return 0;

return 0;
}

//////////////////////////////////////////////?APPROACH 2(LESS PUSH AND MORE POP AND TOP OPERATION)////////////////////////////////////////////////
// #include<bits/stdc++.h>
// using namespace std;
// class Stack{
//     stack<int>s1,s2;
//     public:
//     void push(int x){
//         s1.push(x);
//     }
//     int pop(){
//         if(!s2.empty()){ 
//             int ans=s2.top();
//             s2.pop();
//             return ans;}
//         else {
//             while(s1.size()){
//             s2.push(s1.top());
            
//             s1.pop();}
//             int ans=s2.top();
//             s2.pop();
//             return ans;
//         }
//     }
//     int Top(){
//         if(!s2.empty()){
//             return s2.top();
//     }
//     else{
//         while(s1.size()){
//         s2.push(s1.top());
//         s1.pop();
      
//     }
//     return s2.top();
// }
// }
// int size(){
//     return s1.size()+s2.size();
// }
// };
// int main(){
//     Stack s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     cout<<s.Top()<<endl;
//     cout<<s.pop()<<endl;
//     s.push(4);
//     s.push(5);
//     cout<<s.size()<<endl;
//     cout<<s.pop()<<endl;
//     cout<<s.size()<<endl;
//     return 0;
// }

