#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

//* Stack class using linked list
class Stack {

    Node* top;
public:
    Stack() { top = nullptr; }

    // Push operation
    void push(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << value << " pushed to stack\n";
    }

    // Pop operation
    void pop() {
        if (top == nullptr) {
            cout << "Stack Underflow\n";
            return;
        }
        Node* temp = top;
        top = top->next;
        cout << temp->data << " popped from stack\n";
        delete temp;
    }

    // Peek operation
    int peek() {
        if (top == nullptr) {
            cout << "Stack is empty\n";
            return -1;
        }
        return top->data;
    }

    // Check if stack is empty
    bool isEmpty() {
        return top == nullptr;
    }

    // Display stack elements
    void display() {
        if (top == nullptr) {
            cout << "Stack is empty\n";
            return;
        }
        Node* temp = top;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    cout << "Top element: " << s.peek() << "\n";
    s.pop();
    s.display();
    return 0;
}