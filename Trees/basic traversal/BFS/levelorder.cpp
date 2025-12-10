#include <bits/stdc++.h>
using namespace std;

struct inorder
{
    int data;
    inorder *left;
    inorder *right;
    inorder(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
class Solution
{
public:
    vector<vector<int>> levelorderTraversal(inorder *root)
    {
        vector<vector<int>> ans;
        if (root == NULL)
        {
            return ans;
        }
        queue<inorder*>q;
        q.push(root);
        while(!q.empty()){
               int s=q.size();
               vector<int>level;
               for(int i=0;i<s;i++){
                inorder *node = q.front();
                q.pop();
                level.push_back(node->data);
                if(node->left!=NULL){
                    q.push(node->left);

                }
                if(node->right!=NULL){
                    q.push(node->right);
                }
               }
               ans.push_back(level);
        }
        
        return ans;
    }
};

int main()
{
    inorder *root = new inorder(1);
    root->right = new inorder(2);
    root->right->left = new inorder(3);
    root->left = new inorder(4);
    Solution obj;
    vector<vector<int>> ans = obj.levelorderTraversal(root);
    for (auto it : ans)
    {
        for (auto i : it)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
