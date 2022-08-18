
class Solution {
public:
    int minimumSum(int num) {
        string s = to_string(num);
        sort(s.begin(),s.end());
        int m = (s[0] - '0') * 10 + (s[2] -'0');
        int n = (s[1] - '0') * 10 + (s[3] -'0');
        
        return m+n;
    }
};