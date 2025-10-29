////////////////////////////////////////////?queue using array//////////////////////////////////////////////////
#include<bits/stdc++.h>
using namespace std;
class Queue{
    int *arr;
    int size;
    int front ;
    int rear;
    int cursize=0;
    public:
    Queue(){
        size=1000;
        arr=new int[size];
        front =-1;
        rear=-1;
    }
    void push(int x){
        if(rear>size-1)cout<<"queue overflow"<<endl;
      else if(front ==-1){
            front=(front+1)%size;
            rear=(rear+1)%size;
            arr[rear]=x;
            cursize++;
        }
        else{
            rear=(rear+1)%size;
            arr[rear]=x;
            cursize++;
        }
        }
        int pop(){
if(front==-1)cout<<"queue underflow"<<endl;
else{
    int ans=arr[front];
    front=(front+1)%size;
    cursize--;
    return ans;
}
        }
        int top(){
            return arr[front];
        }
        int Size(){
            return cursize;

        }
    };

    int main(){
        Queue q;
        q.push(10);
        q.push(20);
    cout<<q.top()<<endl;
    cout<<q.pop()<<endl;
q.push(30);
q.push(40);
cout<<q.Size()<<endl;
cout<<q.pop()<<endl;
    }