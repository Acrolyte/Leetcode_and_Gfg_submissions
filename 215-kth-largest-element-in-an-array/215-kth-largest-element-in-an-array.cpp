class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(auto i: nums)
            pq.push(i);
        
        for(int i=0;i<nums.size()-k;i++){
            pq.pop();
        }
        return pq.top();
    }
};