#include <iostream>
using namespace std;

class ArrayStack {
public:
    int *stack;
    int size;
    int top;

    ArrayStack(int n) {
        size = n;
        stack = new int[size];
        top = -1;
    }

    void push(int x) {
        if (top == size - 1) {
            cout << "Stack Overflow\n";
        }
        else {
            stack[++top] = x;
        }
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow\n";
            return -1;
        }

        return stack[top--];
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is Empty\n";
            return -1;
        }

        return stack[top];
    }

    bool isEmpty() {
        return top == -1;
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is Empty\n";
        }
        else {
            for (int i = top; i >= 0; i--) {
                cout << stack[i] << " ";
            }
            cout << endl;
        }
    }

    ~ArrayStack() {
        delete[] stack;
    }
};


int main() {

    ArrayStack st(5);

    // Insert elements
    st.push(23);
    st.push(45);
    st.push(46);
    st.push(34);
    st.push(66);

    cout << "Stack: ";
    st.display();

    // Check top element
    cout << "\nTop element: " << st.peek() << endl;

    // Test overflow
    cout << "\nTrying to push 56: ";
    st.push(56);

    // Remove elements
    cout << "\nPopped: " << st.pop() << endl;
    cout << "Top after pop: " << st.peek() << endl;

    cout << "\nPopped: " << st.pop() << endl;
    cout << "Top after pop: " << st.peek() << endl;

    // Display current stack
    cout << "\nStack after two pops: ";
    st.display();

    // Remove remaining elements
    cout << "\nRemoving remaining elements:\n";

    while (!st.isEmpty()) {
        cout << st.pop() << " ";
    }

    cout << "\n\nIs stack empty? "
         << (st.isEmpty() ? "Yes" : "No") << endl;

    // Test underflow
    cout << "\nTrying to pop from empty stack:\n";
    st.pop();

    return 0;
}