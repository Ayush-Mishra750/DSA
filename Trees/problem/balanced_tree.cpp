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
    bool oneTraversal(preorder* root) {
        return Height(root)!=-1;
    }
int Height(preorder*root){
    if(root==NULL)return 0;

    int lh=Height(root->left);
    int rh=Height(root->right);
    if(lh==-1 ||rh==-1)return -1;
    if(abs(lh-rh)>1)return -1;
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
          bool ans= obj.oneTraversal(root);
        
            cout<<ans<<" ";
          


return 0;
}