class Solution {
public:
    TreeNode* prev = nullptr;
    int minDiff = INT_MAX;
    void inorder(TreeNode* node) {
        if (node==NULL) return;
        inorder(node->left);
        if(prev != NULL){
            minDiff = min(minDiff, node->val - prev->val);
        }
        prev = node;
        inorder(node->right);
    }
    int minDiffInBST(TreeNode* root){
        inorder(root);
        return minDiff;
    }
};
