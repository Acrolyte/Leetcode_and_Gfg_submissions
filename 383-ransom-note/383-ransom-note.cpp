class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> mp1;
        map<char,int> mp2;
        for(auto i: ransomNote) mp1[i]++;
        for(auto i: magazine) mp2[i]++;
        
        for(auto i: mp1){
            char ch = i.first;
            int freq = i.second;
            
            if(mp2[ch]<freq)
                return false;
        }
        return true;
    }
};