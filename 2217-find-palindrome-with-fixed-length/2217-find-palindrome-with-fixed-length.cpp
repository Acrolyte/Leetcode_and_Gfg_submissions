#define ll unsigned long long int
class Solution {
public:
    ll nthPal(int n, int k){
        int t = (k & 1) ? (k/2) : (k/2 -1);
        ll p = (ll)pow(10,t);
        p += n-1;
        
        ll ans = p;
        
        if(k&1) p /= 10;
        
        while(p){
            ans *= 10;
            ans += p%10;
            p /= 10;
        }
        ll t2 = ans, c = 0;
        while(t2){
            c++;
            t2 /= 10;
        }
        if(c>k) return -1;
        return ans;
    }
    vector<long long> kthPalindrome(vector<int>& queries, int intLength) {
        vector<long long> ans;
        for(auto i: queries){
            ans.push_back((long long)nthPal(i,intLength));
        }
        return ans;
    }
};