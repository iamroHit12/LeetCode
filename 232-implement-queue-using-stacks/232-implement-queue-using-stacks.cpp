class MyQueue {
public:
    stack<int> st;

    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        vector<int> vec;
        
        stack<int> s(st);
        
        while(!s.empty()){
            vec.push_back(s.top());
            s.pop();
        }
        
        int val = vec[vec.size()-1];
        vec.pop_back();
        
        for(int i=vec.size()-1;i>=0;i--){
            s.push(vec[i]);
        }
        
        st=s;
        
        return val;
    }
    
    int peek() {
        vector<int> vec;
        
        stack<int> s(st);
        
        while(!s.empty()){
            vec.push_back(s.top());
            s.pop();
        }
        
        return vec[vec.size()-1];
    }
    
    bool empty() {
        return st.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */