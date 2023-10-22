#include <iostream>

class Node {
public:
    int data;
    Node* next;
    Node(int data) : data(data), next(nullptr) {}
};

class Stack {
private:
    Node* top;

public:
    Stack() : top(nullptr) {}

   

    void push(int data) {
        Node* newNode = new Node(data);
        newNode->next = top;
        top = newNode;
        std::cout << "Pushed: " << data << std::endl;
    }

    void pop() {
        if (isEmpty()) {
            std::cout << "Stack is empty. Cannot pop.\n";
            return;
        }
        Node* temp = top;
        top = top->next;
        std::cout << "Popped: " << temp->data << std::endl;
        delete temp;
    }

    bool isEmpty() {
        return top == nullptr;
    }
};

int main() {
    Stack stack;

    stack.push(1);  // Pushed: 1
    stack.push(2);  // Pushed: 2
    stack.push(3);  // Pushed: 3

    stack.pop();     // Popped: 3
    stack.pop();     // Popped: 2
    stack.pop();     // Popped: 1

    stack.pop();     // Stack is empty. Cannot pop.

    return 0;
}