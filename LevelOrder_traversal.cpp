class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == NULL){
            return  {};
        }
         vector<vector<int>>res ;
         queue<TreeNode*> q ;
         q.push(root);
         while(!q.empty()){
            int size = q.size();
            vector<int>level ;
            for(size_t i = 0 ; i < size ; i++){
                TreeNode* node = q.front() ;
                level.push_back(node->val) ;
                q.pop();
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }
            res.push_back(level);
         }
    return res;
    }
};
