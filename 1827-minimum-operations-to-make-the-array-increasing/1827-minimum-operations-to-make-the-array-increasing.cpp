class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans =0, l = nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=l){
                ans += l - nums[i] + 1;
                nums[i] += l - nums[i] + 1;
            }
            l = nums[i];
        }
        return ans;
    }
};