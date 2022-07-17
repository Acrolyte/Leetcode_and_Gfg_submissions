class Solution {
public:
    bool check(int a[], int b[]){
        for(int i=0;i<26;i++)
            if(a[i]!=b[i]) return false;
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int l1 = s1.length(), l2 = s2.length();
        if(l1>l2) return false;
        int mp1[26] = {0};
        for(int i=0;i<l1;i++)
            mp1[s1[i]-'a']++;
        for(int i=0;i<=l2-l1;i++){
            int mp2[26] = {0};
            for(int j=0;j<l1;j++)
                mp2[s2[i+j]-'a']++;
            if(check(mp1,mp2)) return true;
        }
        return false;
    }
};