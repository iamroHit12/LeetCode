class MinStack {
public:
    vector<int> vec;
    int t;
    MinStack() {
        //int t = -1;
    }
    
    void push(int val) {
//         if(t==999)
//             return;
        
//         t++;
        vec.push_back(val);
    }
    
    void pop() {
//         if(t==-1)
//             return;
        
//         t--;
        vec.pop_back();
    }
    
    int top() {
        return vec[vec.size()-1];
    }
    
    int getMin() {
        
        return *min_element(vec.begin(),vec.end());
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */