class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m = mat.size(), n = mat[0].size();
        int lo = 0;
        int hi = n*m - 1;
        while(lo<=hi){
            int mi = lo + (hi-lo)/2;
            if(mat[mi/n][mi%n] == target) return true;
            if(mat[mi/n][mi%n] < target) lo = mi + 1;
            else hi = mi - 1;
        }
        return false;
    }
};