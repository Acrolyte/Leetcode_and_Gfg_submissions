class Solution {
public:
    int findComplement(int num) {
        int a = __lg(num);
        unsigned int bi = (1<<(a+1));
        bi -= 1;
        return bi^num;
    }
};