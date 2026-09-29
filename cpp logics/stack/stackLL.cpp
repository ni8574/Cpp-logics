#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *next;


    Node(int value){
        data = value;
        next = NULL;
    }
};
class Stack{
    public:
    Node *top;
    int size;



stack(){
    top = NULL;
    size = 0;
}

    //push
    void push(int value){
        Node *temp = new Node(value);
        if(temp == NULL){
            cout << "Stack overflow" << endl;
            return;
        }
        else{
        temp->next = top;
        top = temp;
        size++;
        cout << "Pushed " << value << "  into the stack" << endl;
        }

    }
    

    //pop
    void pop(){
        if(top == NULL){
            cout << "Stack underflow" << endl;
            return;
        }
        else{
            Node *temp = top;
            cout << "popped " << top->data << endl;
            top = top->next;
            delete temp;
            size--;
        }
    }


    //peek
    int peek(){
        if(top == NULL){
            cout << "Stack is empty\n";
            return -1;
        }
        else{
            return top->data;
        }
    }
    //IsEmpty

    bool IsEmpty(){
        return top == NULL;
        
    }
    //IsSize

    int IsSize(){
        return size;
    }



};

int main(){
    Stack s;
    s.push(16);
    s.push(62);
    s.push(34);
    s.push(45);
    s.push(56);
    s.push(67);

   s.pop();
   cout << "Stack after first pop:\n";

   s.pop();
      cout << "Stack after second pop:\n";

      s.pop();
         cout << "Stack after third pop:\n";




    return 0;
}


    
