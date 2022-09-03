class Solution {
public:
    bool isValid(string s) {
        if (s.size() == 0) {
            return true;
        }
        stack<char>st;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' or s[i] == '[' or s[i] == '{') {
                s.push(s[i]);
            } else {
                if (st.empty()) {
                    return false;
                }
                if (st.top() == '(' and s[i] == ')') {
                    st.pop();
                }
                else if (st.top() == '[' and s[i] == ']') {
                    st.pop();
                }
                else if (st.top() == '{' and s[i] == '}') {
                    st.pop();
                } else {
                    return false;
                }
            }
        }
        if (!st.empty()) {
            return false;
        }
        return true;
    }
};