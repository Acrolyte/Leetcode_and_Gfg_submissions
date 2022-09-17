class Solution {
public:
    int knapsack(vector<int> &a,int W){
        int n = a.size();
        vector<vector<int>> dp(n+1, vector<int> (W+1));
        
        for(int j=0;j<W+1;j++) dp[0][j] = 0;
        for(int i=0;i<n+1;i++) dp[i][0] = 1;
        
        for(int i=1;i<n+1;i++)
            for(int j=0;j<W+1;j++){
                if(a[i-1] <= j)
                    dp[i][j] = dp[i-1][j] + dp[i-1][j-a[i-1]];
                else
                    dp[i][j] = dp[i-1][j];
            }
        
        return dp[n][W];
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = accumulate(nums.begin(),nums.end(),0);
        if(sum < abs(target) or (target + sum)%2!=0) return 0;
        sum = ((sum - target)/2.0);
        return knapsack(nums,sum);
    }
};