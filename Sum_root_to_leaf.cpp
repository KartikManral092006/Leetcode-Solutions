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
    void get_all_num(TreeNode *root ,string str,vector<string>& s ){
        if(root == nullptr) return;
        str+=to_string(root->val);

        if(root->left==nullptr && root->right==nullptr){
                s.push_back(str);
                return;
        }
        get_all_num(root->left , str , s);
        get_all_num(root->right , str , s);
    }
public:
    int sumNumbers(TreeNode* root) {
        vector<string>s ;
        string str = "";
        get_all_num(root,str,s);
        int total{};
        for(auto& numStr :s){
            total+= stoi(numStr);
        }
    return total;
    }
};
