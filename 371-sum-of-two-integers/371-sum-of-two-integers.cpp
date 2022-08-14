class Solution {
public:
    int getSum(int a, int b) {
        int B = b, A = a;
        while(B != 0){
            int c = A & B;
            A ^= B;
            B = (unsigned) c << 1;
        }
        return A;
    }
};