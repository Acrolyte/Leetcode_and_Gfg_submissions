class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ac = 0, t = 0;
        for(int i=0;i<=nums.size();i++){
            if(i<nums.size())
            t ^= nums[i];
            ac ^= i;
        }
        return (ac ^ t);
    }
};