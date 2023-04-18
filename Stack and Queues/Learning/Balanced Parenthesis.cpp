class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        if (s.length() < 2) 
            return false;
        for (int i = 0; i < s.length(); i++) {
            char c = s.at(i);
            if (c == '{' || c == '(' || c == '[') {
                st.push(c);
            } else {
                if (st.empty())
                    return false;
                if (c == '}' && st.top() == '{')
                    st.pop();
                else if (c == ')' && st.top() == '(')
                    st.pop();
                else if (c == ']' && st.top() == '[')
                    st.pop();
                else
                    return false;
            }
        }
        return st.empty();
    }
};
