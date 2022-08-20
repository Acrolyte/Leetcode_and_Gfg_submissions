class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int> mp;
        for(auto i: stones) mp[i]++;
        int ans = 0;
        for(auto i: jewels) if(mp[i]!=0) ans += mp[i];
        return ans;
    }
};