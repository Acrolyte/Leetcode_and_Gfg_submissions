class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int s = nums.size();
        k = k %s;
        int l = s-k;
        if(l>=0)
        ::rotate(nums.begin(),nums.begin()+l,nums.end());
        
    }
};