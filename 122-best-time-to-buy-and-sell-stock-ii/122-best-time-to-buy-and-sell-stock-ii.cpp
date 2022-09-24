class Solution {
private:
    int maxProfitRec(vector<int>&prices, int i, bool can,vector<vector<int>>&ds){
        int n = prices.size();
        if(i >= n) return 0;
        
        if(ds[i][can] != -1) return ds[i][can];
        
        if(can){
            int notBuy = maxProfitRec(prices,i+1,can,ds);
            int buy = maxProfitRec(prices,i+1,!can,ds) - prices[i];
            return ds[i][can] = max(notBuy,buy);
        }
        else {
             int notSell = maxProfitRec(prices,i+1,can,ds);
            int sell = maxProfitRec(prices,i+1,!can,ds) + prices[i];
            return ds[i][can] = max(notSell,sell);
        }
    }
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n<=1) return 0;
        vector<vector<int>> ds(n+1, vector<int>(2,-1));
        return maxProfitRec(prices,0,true,ds);
    }
};