class MinStack {

    stack<int> *st;
    vector<int> *arr;
    int minval;

public:
    MinStack() {
        st = new stack<int>();
        arr = new vector<int>();
        minval = INT_MAX;
    }
    
    void push(int val) {
        
        if (val <= minval)
        {
            arr->insert(arr->begin(), val);
            minval = val;
        } 
        st->push(val);
    }
    
    void pop() {

        int val = st->top();
        if (minval == val)
        {
            arr->erase(arr->begin());
            if (arr->size() != 0)
                minval = arr->front();
            else
                minval = INT_MAX;
        }

        if (st->size() != 0)
            st->pop();
    }
    
    int top() {
        return st->top();
    }
    
    int getMin() {
        return minval;
    }
};
