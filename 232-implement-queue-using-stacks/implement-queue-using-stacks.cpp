class MyQueue {
private:
    stack<int>s1;
    stack<int>s2;
public:
    MyQueue() {
    }
    
    void push(int t) {
        while(!s1.empty()){
            int x=s1.top();
            s2.push(x);
            s1.pop();
        }
        s2.push(t);
        while(!s2.empty()){
            int x=s2.top();
            s1.push(x);
            s2.pop();
        }
    }
    
    int pop() {
        int z = s1.top();
        s1.pop();
        return z;
        
    }
    
    int peek() {
        return s1.top();
        
    }
    
    bool empty() {
        return s1.empty();
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