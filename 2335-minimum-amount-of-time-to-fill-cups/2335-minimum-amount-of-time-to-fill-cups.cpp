class Solution {
public:
    int fillCups(vector<int>& a) {
        int s = a[0]+a[1]+a[2];
        int m = max(a[0],max(a[1],a[2]));
        return max(m,(s+1)/2);
    }
};