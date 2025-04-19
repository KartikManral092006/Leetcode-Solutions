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
        int Height(TreeNode *root){
        if (root == nullptr){
            return 0;
        } else{
            int leftHeight = Height(root->left);
            int rightHeight = Height(root->right);
            return max(leftHeight, rightHeight) + 1;
        }

        }
        int maxDepth(TreeNode* root) {
            return Height(root);
        }
    };
