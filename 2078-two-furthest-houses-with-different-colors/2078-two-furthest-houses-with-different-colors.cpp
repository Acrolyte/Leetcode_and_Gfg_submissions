#include <bits/stdc++.h>
class Solution {
public:
    int maxDistance(vector<int>& c) {
        int mx = 0;
        for(int i=c.size()-1;i>=1;i--)
            if(c[i] != c[0]){ mx = max(mx,i); break;}
        
        for(int i=0;i<c.size()-1;i++)
            if(c[c.size()-1] != c[i]){ 
                int t = c.size()-1-i;
                mx = max(mx,t);
                break;
            }
        return mx;
    }
};