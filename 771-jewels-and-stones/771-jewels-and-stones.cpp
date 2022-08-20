class Solution {
public:
    int numJewelsInStones(string j, string stones) {
		unordered_set<char> J(j.begin(),j.end());
		int ans = 0;
		for(auto i: stones) if(J.count(i)) ans++;
		return ans;
    }
};