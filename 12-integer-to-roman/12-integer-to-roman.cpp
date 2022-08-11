class Solution {
public:
    void putvalue(int n,char a, char b,char c, string &ans){
        if(n == 0) return;
        else if(n>=1 && n<=3){
            while(n--) ans += a;
        } else if(n == 4){
            ans += a ;
            ans += b;
        } else if(n >= 5 && n < 9){
            ans += b;
            n -= 5;
            while(n--) ans += a;
        } else {
            ans += a ;
            ans += c;
        }
    }

    string intToRoman(int num) {
        int t=0,h=0,te=0,o=0;
        if(num>=1000){
            t = num / 1000;
            num %= 1000;
        }
        if(num>=100){
            h = num/100;
            num %=100;
        }
        if(num>=10){
            te = num/10;
            num %= 10;
        }
        o = num;
        string ans = "";
        while(t--) ans += 'M';
        putvalue(h,'C','D','M',ans);
        putvalue(te,'X','L','C',ans);
        putvalue(o,'I','V','X',ans);

        return ans;    
    }
};