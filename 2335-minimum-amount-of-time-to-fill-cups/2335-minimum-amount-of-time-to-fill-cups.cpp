class Solution {
public:
    int fillCups(vector<int>& a) {
        int s = a[0]+a[1]+a[2];
        int c=0;
        while(s>0){
            sort(a.begin(),a.end());
            if(a[2]) a[2]--;
            if(a[1]) a[1]--;
            c++;
            s = a[0]+a[1]+a[2];
        }
        return c;
    }
};