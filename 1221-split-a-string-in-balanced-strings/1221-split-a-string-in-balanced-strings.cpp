class Solution {
public:
    int balancedStringSplit(string s) {
        int ans =0, c=0;
        for(auto i: s){
            if(i=='L') c++;
            else c--;
            if(c==0) ans++;
        }
        return ans;
    }
};