#include<bits/stdc++.h>
using namespace std;
class LRUCache {
public:
 class Node{
        public:
        int key;
        int val;
        Node*prev;
        Node*next;
        Node(int  _key,int _value){
            key=_key;
            val=_value;
        }
    };
 int cap;
    unordered_map<int,Node*>mp;
     Node*head=new Node(-1,-1);
        Node*tail=new Node(-1,-1);
   LRUCache(int capacity) {
        cap=capacity;
      
        head->next=tail;
        tail->prev=head;
    }
    void addNode(Node*newNode){
        Node*temp=head->next;
        newNode->next=temp;
        newNode->prev=head;
        head->next=newNode;
        temp->prev=newNode;
    }
    void deleteNode(Node* delNode){
        Node*temp=delNode->prev;
        Node*delNext=delNode->next;
        temp->next=delNext;
        delNext->prev=temp;
    }
   int get(int key) {
        if(mp.find(key)!=mp.end()){
            Node*resNode=mp[key];
            int res=resNode->val;
            mp.erase(key);
            deleteNode(resNode);
            addNode(resNode);
            mp[key]=head->next;
            return res;
        }
        return -1;
    }
     void put(int key, int value) {
        if(mp.find(key)!=mp.end()){
            Node*existingNode=mp[key];
            mp.erase(key);
            deleteNode(existingNode);
        }
        if(mp.size()==cap){
            mp.erase(tail->prev->key);
            deleteNode(tail->prev);
        }
        Node*newNode=new Node(key,value);
        addNode(newNode);
        mp[key]=head->next;
    }
    
};



int main(){
int n;
cin>>n;

return 0;
}