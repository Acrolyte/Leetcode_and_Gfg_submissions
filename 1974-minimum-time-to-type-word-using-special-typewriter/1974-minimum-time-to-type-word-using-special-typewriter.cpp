class Solution {
public:
    int minTimeToType(string word) {
        char ct = 'a';
        int ans = 0;
        for(auto i: word){
            if(ct < i){
                ans += min((ct-i+26),i-ct)+1;
                ct = i;
            }
            else if(ct > i){
                ans += min(ct-i,i-ct+26)+1;
                ct = i;
            }
            else ans += 1;
        }
        return ans;
    }
};