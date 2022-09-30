class Solution {
public:
    int subtractProductAndSum(int n) {
        int s = 0, d = 1;
        while(n){
            s += n%10;
            d *= n%10;
            n /= 10;
        }
        return d - s;
    }
};