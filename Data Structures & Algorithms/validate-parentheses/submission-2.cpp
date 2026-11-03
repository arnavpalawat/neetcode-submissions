class Solution {
   public:
    bool isValid(string s) {
        std::stack<char> st;
        for (char c : s) {
            if (st.size() > 0) {
                if (c == ']') {
                    if (st.top() == '[') {
                        st.pop();
                    } else {
                        return false;
                    }
                } else if (c == '}') {
                    if (st.top() == '{') {
                        st.pop();
                    } else {
                        return false;
                    }
                } else if (c == ')') {
                    if (st.top() == '(') {
                        st.pop();
                    } else {
                        return false;
                    }
                } else {
                    st.push(c);
                }
            } else {
                st.push(c);
            }
        }
        if (st.size() == 0) {
            return true;
        } else {
            return false;
        }
    }
};
