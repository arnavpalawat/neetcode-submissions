class MinStack {
public:
    std::vector<int> list;
    std::vector<int> mins;
    int mindex;
    MinStack() {
        
    }
    
    void push(int val) {
        list.push_back(val);
        if (mins.size() == 0 || mins.back() >= val) {
            mins.push_back(val);
        }
    }
    
    void pop() {
        if (mins.back() == list.back()) {
            mins.pop_back();
        }
        list.pop_back();
    }
    
    int top() {
        if (!list.empty()) { 
            return list.back();
        } else {
            return 0;
        }
        
    }
    
    int getMin() {
        if (!mins.empty()) {
            return mins.back();
        } else {
            return 0;
        }
        
    }
};
