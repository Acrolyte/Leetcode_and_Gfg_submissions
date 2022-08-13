class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;
        for(auto i: piles) pq.push(i);
        while(k--){
        	int t = pq.top();
        	pq.pop();
            t = ceil(1.0*t/2);
        	pq.push(t);
        }
        int s = 0;
        while(!pq.empty()){
        	s += pq.top();
        	pq.pop();
        }
        return s;
    }
};