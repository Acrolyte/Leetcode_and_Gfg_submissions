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
    bool chkl(TreeNode* root){
        if(root->left == NULL and root->right == NULL) return true;
        return false;
    }
    bool calcu(TreeNode* root, int t, int c){
        if(chkl(root) and c == t) return true;
        bool a , b;
        if(root->left) a = calcu(root->left,t,c + root->left->val);
        if(root->right) b = calcu(root->right,t,c + root->right->val);
        return a | b;
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL) return false;
        return calcu(root,targetSum,root->val);   
    }
};