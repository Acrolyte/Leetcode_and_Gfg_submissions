class Solution {
public:
    void solve(vector<vector<int>> &ans,vector<int> tmp,int idx,int n, int k){
        if(tmp.size() == k){
            ans.push_back(tmp);
            return ;
        }
        for(int i=idx;i<n;i++){
            tmp.push_back(i+1);
            solve(ans,tmp,i+1,n,k);
            tmp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> tmp;
        int idx = 0;
        solve(ans,tmp,idx,n,k);
        return ans;
    }
};