class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>> v;
        for(auto i: arr) v.push_back({__builtin_popcount(i),i});
        sort(begin(v),end(v));
        vector<int> ans;
        for(auto i: v){
            ans.push_back(i.second);
        }
        return ans;
    }
};