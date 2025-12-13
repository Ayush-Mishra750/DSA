
class Solution {
public:
int mirror(TreeNode*p,TreeNode*q){
     if(!p &&!q){
        return 1;
    }
    if(!p ||!q){
        return 0;
    }
    return (p->val==q->val) && mirror(p->left ,q->right) && mirror(p->right ,q->left);
}
    bool isSymmetric(TreeNode* root) {
       return mirror(root->left,root->right);

    }
};