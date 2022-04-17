class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string w = strs[0];
        string ans = "";
        int k = 0;
        for(auto i: w){
            
            for(int j=0;j<strs.size();j++){
                if(i != strs[j][k]){
                    return ans;
                }
            }
            ans.push_back(i);
            k++;
        }
        return ans;
    }
};