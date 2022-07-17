class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for(auto i: s){
            if(i=='(' or i=='{' or i=='[')
                st.push(i);
            else{
                char t = st.top();
                if(st.empty()) return false;
                if((t=='(' and i==')') or (t == '{' and i=='}') or (t == '[' and i==']'))
                    st.pop();
                else return false;
            }
        }
        if(st.size()>0) return false;
        return true;
    }
};