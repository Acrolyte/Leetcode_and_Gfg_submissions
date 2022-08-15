class Solution {
public:
    char findTheDifference(string s, string t) {
        s += t;
        char ans = 0;
        for(auto i: s) ans ^= i;
        return ans;
    }
};