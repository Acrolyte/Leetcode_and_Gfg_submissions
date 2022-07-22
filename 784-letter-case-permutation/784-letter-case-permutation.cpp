class Solution {
public:
    void modify(string s,int i, vector<string> &v){
        int l = s.length();
        if(i==l){
            v.push_back(s);
            return;
        }
        if(isalpha(s[i])){
            modify(s,i+1,v);
            if(isupper(s[i])){
                s[i]=tolower(s[i]);
                modify(s,i+1,v);
            } else if(islower(s[i])){
                s[i] = toupper(s[i]);
                modify(s,i+1,v);
            }
        }
        else if(isdigit(s[i])) modify(s,i+1,v);
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> v;
        modify(s,0,v);
        return v;
    }
};