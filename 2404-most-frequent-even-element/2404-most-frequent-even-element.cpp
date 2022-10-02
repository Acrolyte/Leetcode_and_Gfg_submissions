class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> mp;
        int c = 0, el = INT_MAX;
        for(auto i: nums){
            if(i%2==0) mp[i]++;
            
            if(mp[i]>c or (mp[i]== c and i<el) ){
                c = mp[i];
                el = i;
            }
        }
        if(c == 0) return -1;
        return el;
    }
};