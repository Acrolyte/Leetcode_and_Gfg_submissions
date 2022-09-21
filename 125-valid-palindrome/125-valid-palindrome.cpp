class Solution {
public:
    bool isPalindrome(string s) {
        string p;
        
        transform(s.begin(),s.end(),s.begin(),::tolower);
        
        for(auto i: s){
            if((i>='a' && i<='z') or (i>='0' && i<='9'))
            p.push_back(i);
        }
        
        string q = p;
        reverse(q.begin(),q.end());
        
        if(p==q) return true;
        return false;
    }
};