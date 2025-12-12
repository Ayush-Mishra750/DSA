
class Solution {
public:
int dia=0;
     int dfs(TreeNode*root){
        if(root==NULL)return 0;
         
        int lh=dfs(root->left);
        
        int rh=dfs(root->right);
         dia=max(dia,lh+rh);
        return 1+ max(lh,rh);
     }
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return dia;
    }
};