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
    void  resultant(TreeNode *root , int target , vector<int>& ans , vector<vector<int>>& res){
        if(root == nullptr) return ;

        ans.push_back(root->val);
        target -= root->val;

        if(target == 0 && root->left == nullptr && root->right == nullptr){
            res.push_back(ans);
        }

        resultant(root->left,target,ans,res);
        resultant(root->right ,target,ans,res);

        ans.pop_back();
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>ans ;
        vector<vector<int>>res;
        resultant(root , targetSum , ans,res);
        return res;
    }
};
