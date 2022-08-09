class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int l = nums.size();
        int n = 1 << l;
        int ans = 0;
        for(int i=0;i<n;i++){
            int a = 0;
            for(int j=0;j<l;j++)
                if(i & (1 << j))
                    a ^= nums[j];
            ans += a;
        }
        return  ans;        
    }
};