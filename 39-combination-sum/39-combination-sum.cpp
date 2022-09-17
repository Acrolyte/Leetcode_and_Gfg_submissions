class Solution {
public:
    void rec(vector<vector<int>> &ans,vector<int> &ds, int idx, vector<int> &a, int target){
        int n = a.size();
        if(idx == n ){
            if(target <= 0)
            ans.push_back(ds);
            return;
        }
        if(a[idx] <= target) {
            ds.push_back(a[idx]);
            rec(ans,ds,idx,a,target-a[idx]);
            ds.pop_back();
        }
        rec(ans,ds,idx+1,a,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        rec(ans,ds,0,candidates,target);
        return ans;
    }
};