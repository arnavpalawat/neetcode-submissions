class Solution {
   public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> nums;
        for (string str : tokens) {
            try {
                nums.push(stoi(str));
            } catch (const std::invalid_argument&) {
                int b = nums.top();
                nums.pop();
                int a = nums.top();
                nums.pop();
                if (str == "+") {
                    nums.push(a + b);
                } else if (str == "-") {
                    nums.push(a - b);
                } else if (str == "*") {
                    nums.push(a * b);
                } else if (str == "/") {
                    nums.push(a / b);
                }
            }
        }
       return nums.top();
        
    }
};
