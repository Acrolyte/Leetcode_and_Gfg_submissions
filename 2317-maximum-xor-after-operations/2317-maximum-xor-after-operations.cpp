class Solution {
public:
    int maximumXOR(vector<int>& nums) {
        int a = 0;
        for(auto i: nums) a |= i;
        return a;
    }
};