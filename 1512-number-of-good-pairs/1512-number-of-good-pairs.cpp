class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto i: nums) mp[i]++;
        int ans = 0, k=0 ;
        for(auto i: mp){
            k = i.second;
            ans += k*(k-1)/2;
        }
        return ans;
    }
};