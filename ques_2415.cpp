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
    void Dfs(TreeNode * leftCh , TreeNode *rightCh , int level ){
        if(leftCh ==nullptr || rightCh == nullptr) return ;

        if(level % 2 == 0 ){
            int temp = leftCh->val;
            leftCh->val = rightCh->val;
            rightCh->val = temp ;
        }

        Dfs(leftCh->left, rightCh->right , level+1);
        Dfs(leftCh->right, rightCh->left , level+1);
    }
public:
    TreeNode* reverseOddLevels(TreeNode* root) {
        Dfs(root->left, root->right, 0);
        return root ;
    }
};
