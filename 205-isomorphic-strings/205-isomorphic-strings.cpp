class Solution {
public:
    bool isIsomorphic(string str1, string str2) {
        unordered_map<char,char> mp,mp2;
        
        if(str1.size()!=str2.size()) return false;
        
        int k = 0;
        for(auto i: str1){
            if(mp[i] or mp2[str2[k]]) {
                if(mp[i]!=str2[k] && mp2[str2[k]]!=i) return false;
            }
            else{
                mp[i] = str2[k];
                mp2[str2[k]] = i;
            }
            k++;
        }
        
        return true;
    }
};