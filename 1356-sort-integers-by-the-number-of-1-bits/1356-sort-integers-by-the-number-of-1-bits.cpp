class Solution {
public:
    
    vector<int> sortByBits(vector<int>& arr) {
        sort(begin(arr),end(arr),[&] (int a, int b){
            int x = bitset<32>(a).count();
            int y = bitset<32>(b).count();
            if(x == y) return a <= b;
            return x <= y; 
        });
        return arr;
    }
};