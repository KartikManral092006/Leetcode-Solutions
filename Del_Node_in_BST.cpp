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
TreeNode *InorderPre(TreeNode* p){
    while(p && p->right != NULL){
        p = p->right;
    }
    return p ;
}
TreeNode *InorderSucc(TreeNode* p){
    while(p && p->left != NULL){
        p = p->left;
    }
    return p ;
}

int Height(TreeNode *h){
    int x , y ;
    if(h == NULL)return 0;
    x = Height(h->left);
    y = Height(h->right);
    return (x>y)?x+1 :y+1;
}
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        TreeNode * temp = root ;

        if(root == NULL)return NULL;

        if(key < root->val ){
            root->left = deleteNode(root->left , key);
        }else if(key > root->val){
            root->right = deleteNode(root->right,key);
        }else{

             if(!root->left && !root->right){
                delete root ;
                return NULL;
            }

            if(Height(root->left) > Height(root->right)){

                temp = InorderPre(root->left);
                root->val = temp->val ;
                root->left = deleteNode(root->left , temp->val);
            }else{
                temp = InorderSucc(root->right);
                root->val = temp->val ;
                root->right = deleteNode(root->right , temp->val);
            }
        }
        return root ;
    }
};
