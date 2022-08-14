class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==0) return false;
        return (__builtin_ctz(n) % 2 == 0 and __builtin_popcount(n) == 1);
    }
};