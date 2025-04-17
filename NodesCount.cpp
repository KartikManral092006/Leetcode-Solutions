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
        int countNodes(TreeNode* root) {
            TreeNode* t = root ;
            int x,y ;
            if(root!=NULL){
                x = countNodes(t -> left);
                y = countNodes(t-> right);
                return x+y+1 ;
            }
            return 0;
        }
    };
