class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        int ans = 0;
        for(auto i: nums) mp[i]++;
        for(auto i: mp) if(i.second>1) {ans = i.first; break;}
        return ans;
    }
};