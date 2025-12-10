// #include<bits/stdc++.h>
// using namespace std;

// struct inorder
// {
//     int data;
//     inorder*left;
//     inorder*right;
//     inorder(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };
// class Solution{
//     public:
//     vector<int> inorderTraversal(inorder*root){
//          vector<int>ans;
//          if(root==NULL){
//             return ans;

//          }
//          inorder*curr=root;
//          stack<inorder*>st;
//          while(true){
//             if(curr!=NULL){
//                 st.push(curr);
//                 curr=curr->left;
//             }
//             else{
//                 if(st.empty()==true)break;
//                 curr=st.top();
//                 st.pop();
//                 ans.push_back(curr->data);
//                 curr=curr->right;
//             }
//          }
//          return  ans;

//     }
// };

// int main(){
//      inorder*root=new inorder(1);
//      root->right=new inorder(2);
//      root->right->left=new inorder(3);
//           root->left=new inorder(4);
//           Solution obj;
//           vector<int>ans=obj.inorderTraversal(root);
//           for(auto it:ans){
//             cout<<it<<" ";
//           }


// return 0;
// }



/// using recursion we doing the inorder traversal of a binary tree(2nd method)

#include<bits/stdc++.h>
using namespace std;

struct inorder
{
    int data;
    inorder*left;
    inorder*right;
    inorder(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
class Solution{
    public:
   void inorderTraversal(inorder*root,vector<int>&ans){
      
         if(root==NULL){
            return ;

         }
       inorderTraversal(root->left,ans);
       ans.push_back(root->data);
       inorderTraversal(root->right,ans);

    }
};

int main(){
     inorder*root=new inorder(1);
     root->right=new inorder(2);
     root->right->left=new inorder(3);
          root->left=new inorder(4);
          Solution obj;
          vector<int>ans;
          obj.inorderTraversal(root,ans);
          for(auto it:ans){
            cout<<it<<" ";
          }


return 0;
}