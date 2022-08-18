class Solution {
public:
    int minCostToMoveChips(vector<int>& pos) {
        int a=0,b=0,f=0;
        for(auto i: pos){
            if(i&1) a++;
            else b++;
        }
        return min(a,b);
    }
};