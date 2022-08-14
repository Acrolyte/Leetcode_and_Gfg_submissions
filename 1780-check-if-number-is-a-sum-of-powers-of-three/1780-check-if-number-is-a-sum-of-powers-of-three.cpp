class Solution {
public:
    string tern(int n){
        string s = "";
        if(n / 3 != 0) s += tern(n / 3);
        s += to_string(n%3);
        return s;
    }

    bool checkPowersOfThree(int n) {
		if(n <= 0) return false;
		string t = tern(n);
		for(auto i: t) if(i == '2') return false;
		return true;
    }
};