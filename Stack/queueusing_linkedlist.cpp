#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class Queue{
    Node*front;
    Node*rear;
    int cursize=0;
    public:
    Queue(){
        front=NULL;
        rear=NULL;
    }
    void push(int x){
        Node *temp=new Node(x);
        if(front ==NULL){
            front=temp;
            rear=temp;
            cursize++;
        }
        else{
            rear->next=temp;
            rear=temp;
            cursize++;
        }
    }
    int pop(){
        if(front ==NULL)cout<<"queue underflow"<<endl;
        else{
            Node* temp=front;
            front=front->next;
            int ans=temp->data;
            delete temp;
            cursize--;
            return ans;
        }

    }
    int top(){
        return front->data;
    }
    int size(){
        return cursize;
    }

    };
    int main(){
        Queue q;
        q.push(1);
        q.push(2);
        q.push(3);
        cout<<q.top()<<endl;
        cout<<q.pop()<<endl;
        q.push(4);
        q.push(5);
        cout<<q.size()<<endl;
        cout<<q.pop()<<endl;
        cout<<q.size()<<endl;
    }
    