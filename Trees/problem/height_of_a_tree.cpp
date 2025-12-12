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
class Solution {
public:
   
int oneTraversal(preorder*root){
    if(root==NULL)return 0;

    int lh=oneTraversal(root->left);
    int rh=oneTraversal(root->right);

    return max(lh,rh)+1;
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
          int ans= obj.oneTraversal(root);
        
            cout<<ans<<" ";
          


return 0;
}