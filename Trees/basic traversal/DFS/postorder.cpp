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

//     void preorder(Node* root, vector<int> &arr){
//         if(root == nullptr){
//             return;
//         }
//         preorder(root->left, arr);
        
//         preorder(root->right, arr);
//         arr.push_back(root->data);
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


//? using iterative method to do postorder traversal of a binary tree using 2 stack
// #include<bits/stdc++.h>
// using namespace std;

// struct postorder
// {
//     int data;
//     postorder*left;
//     postorder*right;
//     postorder(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };
// class Solution{
//     public:
//    vector<int> postorderTraversal(postorder*root){
//     vector<int>ans;
//       if(root==NULL){
//         return ans ;
//       }
//       stack<postorder*>st1,st2;
//       st1.push(root);
//       while(!st1.empty()){
//                  root=st1.top();
//                  st1.pop();
//                  st2.push(root);
//         if(root->left!=NULL){
//             st1.push(root->left);
//         }
//         if(root->right!=NULL){
//             st1.push(root->right);
//         }
//       }
//       while(!st2.empty()){
//         ans.push_back(st2.top()->data);
//         st2.pop();
//       }
//       return ans;
//     }
// };

// int main(){
//      postorder*root=new postorder(1);
//      root->right=new postorder(2);
//      root->right->left=new postorder(3);
//           root->left=new postorder(4);
//           Solution obj;
//           vector<int>ans= obj.postorderTraversal(root);
//           for(auto it:ans){
//             cout<<it<<" ";
//           }


// return 0;
// }
//? using iterative method to do postorder traversal of a binary tree using 1 stack


#include<bits/stdc++.h>
using namespace std;

struct postorder
{
    int data;
    postorder*left;
    postorder*right;
    postorder(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
class Solution{
    public:
   vector<int> postorderTraversal(postorder*root){
    vector<int>ans;
      if(root==NULL){
        return ans ;
      }
      stack<postorder*>st1;
      
      postorder*curr=root;
      while(curr!=NULL ||!st1.empty()){
              if(curr!=NULL){
                st1.push(curr);
                curr=curr->left;
              }
              else{
               postorder*temp=st1.top()->right;
               if(temp==NULL){
                temp=st1.top();
                st1.pop();
                ans.push_back(temp->data);
                while(!st1.empty() && temp==st1.top()->right){
                    temp=st1.top();
                    st1.pop();
                    ans.push_back(temp->data);
                }
               }
               else
               {
                curr=temp;
               }
             
              }
      }
      return ans;
    }
};

int main(){
     postorder*root=new postorder(1);
     root->right=new postorder(2);
     root->right->left=new postorder(3);
          root->left=new postorder(4);
          Solution obj;
          vector<int>ans= obj.postorderTraversal(root);
          for(auto it:ans){
            cout<<it<<" ";
          }


return 0;
}