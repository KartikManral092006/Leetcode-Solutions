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
        bool isSameTree(TreeNode* p, TreeNode* q)
        {
            stack<pair<TreeNode*, TreeNode*>>st1;
            st1.push({p, q});
            while (!st1.empty()) {
                auto [nd, nd1] = st1.top();
                st1.pop();
                if (!nd && !nd1) continue;
                if (!nd || !nd1 || nd->val != nd1->val) return false;
                st1.push({nd->left, nd1->left});
                st1.push({nd->right, nd1->right});
            }
            return true;
        }
    };
