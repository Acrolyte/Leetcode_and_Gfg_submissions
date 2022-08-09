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
    bool chckLeaf(TreeNode* root){
        if(root->right == NULL and root->left == NULL) return true;
        return false;
    }
    
    int dfs(TreeNode* root, int d){
        if(chckLeaf(root)) return d;
        int l = INT_MAX, r = INT_MAX;
        if(root->left) l = dfs(root->left,d+1);
        if(root->right) r = dfs(root->right,d+1);
        return min(l,r);
    }
    
    int minDepth(TreeNode* root) {
        if(root == NULL) return 0;
        int d = 1;
        return dfs(root,1);
    }
};