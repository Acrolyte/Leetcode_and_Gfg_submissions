// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int bin(int l, int r){
       if(r>=l){
           int m = l + (r-l)/2;
           if(isBadVersion(m-1)==0 and isBadVersion(m)==1)
               return m;
           if(isBadVersion(m) == 1)
               return bin(l,m-1);
           else
               return bin(m+1,r);
       }
        return -1;
    }
    int firstBadVersion(int n) {
        if(n==1) return 1;
        // for(int i=1;i<=n;i++)
        //     cout<<isBadVersion(i)<<' ';
        return bin(0,n);
    }
};