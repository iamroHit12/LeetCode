class MyStack {
public:
    
    void reverse(queue<int> &q){
        for(int i=0;i<q.size()/2;i++){
            int temp = q.front();
            q.front() = q.back();
            q.back() = temp;
        }
    }
    
    queue<int> q;
    
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        int val = q.back();
        reverse(q);
        cout<<q.front();
        q.pop();
        cout<<q.front();
        reverse(q);
        cout<<q.front();
        return val;
    }
    
    int top() {
        return q.back();
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */