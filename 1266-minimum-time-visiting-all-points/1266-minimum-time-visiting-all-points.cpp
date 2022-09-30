class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int c = 0;
        for(int i=1;i<points.size();i++){
            vector<int> a = points[i-1];
            c += max(abs(a[0]-points[i][0]),abs(a[1]-points[i][1]));
        }
        return c;
    }
};