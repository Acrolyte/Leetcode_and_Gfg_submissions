class Solution {
public:
    int halveArray(vector<int>& nums) {
        multiset<double,greater<double>> ms;
        double s = 0;
        for(auto i: nums){ ms.insert(i); s += i;}

        double h = s/2;
    	int c= 0;
    	while(h < s){
    		double t = *ms.begin();
    		ms.erase(ms.begin());
    		s -= t;
    		t = t/2;
    		s += t;
    		ms.insert(t);
    		c++;
    	}
    	return c;
    }
};