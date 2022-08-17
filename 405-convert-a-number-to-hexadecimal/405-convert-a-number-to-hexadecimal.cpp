class Solution {
public:
    string toHex(long int n) {
        if(n == 0) return "0";
        string s = "0123456789abcdef";
        string ans = "";
        unsigned int b;
        if(n < 0) b = ~(-n) + 1;
        else b = n;
        while(b>0){
            ans = s[b%16] + ans;
            b /= 16;
        }
        return ans;
    }
};