class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        int a = __lg(n);
        return ((1<<(a+1))-1)^n;
    }
};