class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy = 0, sell = 0, i = 0, ans = 0;
        
        while(i < n-1){
            while(i<n-1 && prices[i] >= prices[i+1])
                i++;
            buy = prices[i];
            while(i<n-1 && prices[i] < prices[i+1])
                i++;
            sell = prices[i];
            ans += sell - buy;
        }
        return ans;
    }
};