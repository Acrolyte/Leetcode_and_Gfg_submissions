class Solution {
public:
    vector<int> singleNumber(vector<int>& v) {
        int xors = 0;
        for(auto i: v){
            xors = xors xor i;
        }
        int c= 0, t = xors;
        while(xors!=0){
            if((xors & 1) > 0) break;
            c++;
            xors >>= 1;
        }
        int n1 = 0;
        for(auto i: v){
            if(i & (1 << c))
            n1 ^= i;
        }
        
        return {n1 , t^n1};
    }
};