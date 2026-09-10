/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    //   int result = 0;
        pair<int , int> dfs(TreeNode* root,int &result){
            if(!root) return {0,0};
            
            auto p1=dfs(root->left,result);
            auto p2=dfs(root->right,result);
            int total=p1.first+p2.first+root->val;
            int cnt=p1.second+p2.second+1;
            if(root->val==total/cnt){
                result+=1;
            }
            return {total,cnt};

        }
        
        

    int averageOfSubtree(TreeNode* root) {
        int result=0;
         dfs(root,result);
         return result;
    }
};