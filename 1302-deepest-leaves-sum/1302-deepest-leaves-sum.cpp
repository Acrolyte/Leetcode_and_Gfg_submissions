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
    
    int maxDepth(TreeNode* root, int t){
        if(root->left == NULL and root->right == NULL) return t;
        int l = 0, r = 0;
        if(root->left) l = maxDepth(root->left,t+1);
        if(root->right) r = maxDepth(root->right, t+1);
        return max(r,l);
    }
    
    void deepSum(TreeNode* root, int md, int cd, int &t){
        if(root == NULL) return ;
        if(md == cd){ t += root->val;};
        if(root->left) deepSum(root->left,md,cd+1,t);
        if(root->right) deepSum(root->right,md,cd+1,t);
    }
    
    int deepestLeavesSum(TreeNode* root) {
        int md = maxDepth(root,0);
        int t = 0;
        deepSum(root,md,0,t);
        return t;
    }
};