/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        std::queue<TreeNode *>q;
        TreeNode *node;
        q.push(cloned);
        while(!q.empty()){
            int len = q.size();
            for(int i = 0 ;i < len;i++){
                node = q.front();
                q.pop();
                if(node->val == target->val){
                    return node ;
                }
                if(node->left!=nullptr){
                    q.push(node->left);
                }
                 if(node->right!=nullptr){
                    q.push(node->right);
                }
            }
        }
        return nullptr;
    }
};
