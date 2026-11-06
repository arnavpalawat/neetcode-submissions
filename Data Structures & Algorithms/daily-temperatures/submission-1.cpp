class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        std::vector<int> vec(temperatures.size());
        // stack<value, index>
        std::stack<pair<int, int>> st;
        for (int i = 0; i < temperatures.size(); i++) {
            if (!(st.empty())) {
                if (st.top().first < temperatures[i]) {
                // pop spam
                    while (!st.empty() && st.top().first < temperatures[i]) {
                        // edit
                        vec[st.top().second] = i - st.top().second;
                        st.pop();

                    }
                }
            }
            
            st.push(std::pair<int, int>{temperatures[i], i});
        }
        return vec;
    }
};
