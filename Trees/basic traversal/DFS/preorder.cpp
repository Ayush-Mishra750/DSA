// #include <bits/stdc++.h>
// using namespace std;


// struct Node {
//     int data;
//     Node* left;
//     Node* right;
   
//     Node(int val) : data(val), left(nullptr), right(nullptr) {}
// };

// class Solution {
// public:
//     // Function to perform preorder traversal
//     // of the tree and store values in 'arr'
//     void preorder(Node* root, vector<int> &arr){
//         if(root == nullptr){
//             return;
//         }
//         arr.push_back(root->data);
//         preorder(root->left, arr);
 
//         preorder(root->right, arr);
//     }
//     vector<int> preOrder(Node* root){
//          vector<int> arr;
//         preorder(root, arr);
//         return arr;
//     }
// };

// int main()
// {
 
//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);

   
//     Solution sol;
//     vector<int> result = sol.preOrder(root);
//     cout << "Preorder Traversal: ";
//     for(int val : result) {
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }


//? using iterative method to do preorder traversal of a binary tree
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
   vector<int> preorderTraversal(preorder*root){
    vector<int>ans;
      if(root==NULL){
        return ans ;
      }
      stack<preorder*>st;
      st.push(root);
      while(!st.empty()){
        preorder*node=st.top();
        st.pop();
        ans.push_back(node->data);
        if(node->right!=NULL){
            st.push(node->right);
        }
        if(node->left!=NULL){
            st.push(node->left);
        }
      }
      return ans;
      

    }
};

int main(){
     preorder*root=new preorder(1);
     root->right=new preorder(2);
     root->right->left=new preorder(3);
          root->left=new preorder(4);
          Solution obj;
          vector<int>ans= obj.preorderTraversal(root);
          for(auto it:ans){
            cout<<it<<" ";
          }


return 0;
}