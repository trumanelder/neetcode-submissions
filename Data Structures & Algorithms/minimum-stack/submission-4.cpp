class MinStack {
private:
    vector<pair<int, int>> min_stack;
    int minimum = INT_MAX;
public:
    MinStack() = default;
    
    void push(int val) {
        if(val < minimum) minimum = val;
        min_stack.push_back(pair(minimum, val));
    }
    
    void pop() {
        min_stack.pop_back();
        minimum = min_stack.size() ? get<0>(min_stack.back()) : INT_MAX;
    }
    
    int top() {
        return get<1>(min_stack.back());
    }
    
    int getMin() {
        return get<0>(min_stack.back());
    }
};
 