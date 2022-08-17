class Solution {
public:
    int binaryGap(int n) {
        vector<int> v;
        for(int i=0;i<32;i++){
            if( n & (1<<i)) v.push_back(i);
        }
        int mx = 0;
        for(int i=0;i<v.size()-1;i++)
            if(v[i+1]-v[i]) mx = max(v[i+1]-v[i],mx);
        return mx;
    }
};