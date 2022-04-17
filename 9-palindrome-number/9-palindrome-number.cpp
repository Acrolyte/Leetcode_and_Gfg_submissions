class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long t = x;
        long long z = 0;
        while(x){
            z = (z*10)+(x%10);
            x /= 10;
        }
        if(t == z) return true;
        return false;
    }
};