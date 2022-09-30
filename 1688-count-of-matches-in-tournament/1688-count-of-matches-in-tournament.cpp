class Solution {
public:
    int numberOfMatches(int n) {
        int c = 0;
        
        while(n>1){
            if(n&1){
                c += (n-1)/2;
                n = n>>1;
                n++;
            }
            else {
                c += n/2;
                n = n>>1;
            }            
        }
        return c;
    }
};