class Solution {
public:
    int bina(vector<int> &nums, int s, int l, int r){
        
        if(r>=l){
            int mid = l + (r-l)/2;
            if(nums[mid]==s)
                return mid;
            if(nums[mid]>s)
                return bina(nums,s,l,mid-1);
            else
                return bina(nums,s,mid+1,r);
                
        }
        return l;
    }
    int searchInsert(vector<int>& nums, int target) {
        return bina(nums,target,0,nums.size()-1);
    }
};