class Solution {
public:
    int maximumUnits(vector<vector<int>>& v, int t) {
        sort(v.begin(),v.end(),[&](vector<int> a,vector<int> b){
            if(a[1]>b[1]) return true;
            return false;
        });
        
        int ans = 0;
        for(int i=0;i<v.size();i++){
            int bxs = v[i][0], units = v[i][1];
            if(t<=0) break;
            if(t>=bxs){
                ans += bxs * units;
                t -= bxs;
            }
            else {
                ans += t * units;
                t = 0;
            }
        }
        return ans;
    }
};