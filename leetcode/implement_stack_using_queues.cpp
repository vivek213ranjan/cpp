Implement stack using queue

class Stack {

	push(x)

	pop()

	top()

	empty()
}




S = []


Q1 = [] // which will help us in optimizing top/pop

Q2 = []

push()

Observation:
1) Since Q1 contains element in same order as stack, Q2 will contain the top, followed by all elements of Q1
2) At any state, we should ensure, Q1 elements order should be same as stack.
3) If we ensure step 2, pop() and top() will be O(1)

================

Algorithm

1) Insert the element in Q2 //O(1) 
2) Remove all the elments from Q1 and enqueue it in Q2 //O(N)
3) Swap both queues Q1 <=> Q2 //O(N)


push(1) = s = [1]

Q2 = []
Q1 = [1]


push(2) s = [2, 1]

Q1 = [2, 1]
Q2 = []


push(5) -> s = [5,2,1]


Q1 = [5, 2, 1]

Q2 = []


pop() -> Q1.front(); Q1.pop()

top() -> Q1.front();









OBSERVATION


Q2 = [] ==== S => []

push(1)

S = [1,5,6,7,8,9]


Q1 = [1, 5, 6, 7,8,9]



Code:

class MyStack {
public:
    
    queue<int> q1; //queue -> top()/pop()
    queue<int> q2;
    
    MyStack() {
    }
    
    void push(int x) {
        q2.push(x);
        while(!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }
    
    int pop() {
           if (q1.empty()) {
               return -1;
           }
        int val = q1.front();
        q1.pop();
        return val;
    }
    
    int top() {
        if (q1.empty()) {
               return -1;
           }
        int val = q1.front();
        return val;
    }
    
    bool empty() {
       return q1.empty() && q2.empty();
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
