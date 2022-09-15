class Solution {
public:
    int climbStairs(int n) {
        if(n <= 0) return 0;
        if(n==1 or n==2) return n;
        int x=2, y = 1, z = 0;
        for(int i=2;i<n;i++){
            z = x+y;
            y = x;
            x = z;
        }
        return z;
    }
};