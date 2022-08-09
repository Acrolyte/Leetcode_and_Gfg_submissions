class Solution {
public:
    string addBinary(string a, string b) {
        string c = "";
        int al = a.length()-1, bl = b.length()-1, carry = 0, x, y, s;
        
        while(al>=0 || bl>=0){
            s = carry;
            if(al >= 0)
            s += a[al] - '0';
            if(bl >= 0)
            s += b[bl] - '0';

            if(s == 0){
                c += '0';
                carry = 0;
            } else if(s == 1){
                c += '1';
                carry = 0;
            } else if(s == 2){
                c += '0';
                carry = 1;
            } else {
                c += '1';
                carry = 1;
            }
            al--; bl--;
        }
        if(carry) c += '1';
        reverse(c.begin(),c.end());
        return c;
        
    }
};