class Solution {
public:
    int divide(int div, int dsr) {
        if(div == INT_MIN and dsr == -1) return INT_MAX;
        if(div == INT_MIN and dsr == 1) return INT_MIN;
        return div/dsr;
    }
};