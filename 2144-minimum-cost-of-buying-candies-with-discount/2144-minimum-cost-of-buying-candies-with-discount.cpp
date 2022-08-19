class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.rbegin(),cost.rend());
        int a = 0;
        for(int i=0;i<cost.size();i++)
            if(i%3!=2) a+=cost[i];
        return a;
    }
};