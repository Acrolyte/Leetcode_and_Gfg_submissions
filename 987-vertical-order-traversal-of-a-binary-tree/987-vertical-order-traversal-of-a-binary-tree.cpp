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
    void vert(TreeNode *root, map<int, map<int,multiset<int>>> &mp, int row, int col){
        if(root == NULL) return;
        vert(root->left,mp,row+1,col-1);
        mp[col][row].insert(root->val);
        vert(root->right,mp,row+1,col+1);        
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> v;
        if(root == NULL) return v;
        map<int,map<int,multiset<int>>> mp;
        vert(root,mp,0,0);
        for(auto i: mp){
            vector<int> tmp;
            for(auto j: i.second){
                for(auto k: j.second)
                tmp.push_back(k);
            }
            v.push_back(tmp);
        }
        return v;
    }
};