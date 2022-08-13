class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> ans;
        ans.push_back(0);
        ans.push_back(1);
        n = n - 1;

        int t = 1;
        while(n--){
        	vector<int> tmp;
        	for(auto i: ans) tmp.push_back(i);
        	reverse(tmp.begin(),tmp.end());
        	for(int &i: tmp)
        		i = i | (1<<t);
        	for(auto i: tmp) ans.push_back(i);
        	t++;
        }
        return ans;
    }
};