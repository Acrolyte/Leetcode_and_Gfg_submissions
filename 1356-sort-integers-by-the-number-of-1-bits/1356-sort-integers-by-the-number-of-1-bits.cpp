class Solution {
public:
    static bool cmp(int a,int b){
        int x = bitset<32>(a).count();
        int y = bitset<32>(b).count();
        if(x == y) return a <= b;
        return x <= y;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(begin(arr),end(arr),cmp);
        return arr;
    }
};