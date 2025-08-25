
class Solution {
    int currentsum = 0;
    void reverseInorder(TreeNode* root){
        if(!root) return;
        reverseInorder(root->right);
        currentsum+=root->val;
        root->val = currentsum;
        reverseInorder(root->left);
    }
public:
    TreeNode* bstToGst(TreeNode* root) {
        reverseInorder(root);
        return root;
    }
};
