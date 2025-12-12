//? using single traversal to find the inorder ,preorder ant postorder traversal in binary tree
#include<bits/stdc++.h>
using namespace std;

struct preorder
{
    int data;
    preorder*left;
    preorder*right;
    preorder(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
class Solution{
    public:
   vector<int> oneTraversal(preorder*root){
   stack<pair<preorder*,int>>st;
   st.push({root,1});
   vector<int>pre,in,post;
   if(root==NULL){
    return pre;
   }
   while(!st.empty()){
    auto it=st.top();
    st.pop();
    if(it.second==1){
        pre.push_back(it.first->data);
        it.second++;
        st.push(it);
        if(it.first->left!=NULL){
            st.push({it.first->left,1});
        }
    }
    else if(it.second==2){
        in.push_back(it.first->data);
        it.second++;
        st.push(it);
        if(it.first->right!=NULL){
            st.push({it.first->right,1});
        }
    }
    else{
        post.push_back(it.first->data);
    }
   }
    return post;
    }
};

int main(){
     preorder*root=new preorder(1);
     root->right=new preorder(5);
     root->right->left=new preorder(6);
     root->right->right=new preorder(7);

          root->left=new preorder(2);
          root->left->left=new preorder(3);
          root->left->right=new preorder(4);


          Solution obj;
          vector<int>ans= obj.oneTraversal(root);
          for(auto it:ans){
            cout<<it<<" ";
          }


return 0;
}