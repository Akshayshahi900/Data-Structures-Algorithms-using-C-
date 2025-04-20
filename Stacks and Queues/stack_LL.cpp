#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

class Stack
{
private:
    Node *top;
    int size;

public:
    Stack()
    {
        top = nullptr;
        size = 0;
    }

    void push(int x)
    {
        Node *temp = new Node(x);
        temp->next = top;
        top = temp;
        size++;
        cout << "Element Pushed: " << top->data << endl;
    }

    void pop()
    {
        if (top == nullptr)
        {
            cout << "Stack is empty! Cannot pop." << endl;
            return;
        }
        int element = top->data;
        Node *temp = top;
        top = top->next;
        delete temp;
        size--;
        cout << "Element Popped: " << element << endl;
    }

    void topElement()
    {
        if (top == nullptr)
        {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Top element is: " << top->data << endl;
    }

    void print()
    {
        if (top == nullptr)
        {
            cout << "Stack is empty!" << endl;
            return;
        }

        Node *temp = top;
        cout << "Stack elements: ";
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return top == nullptr;
    }
};

int main()
{
    Stack s;
    s.push(5);
    s.push(10);
    s.push(15);
    s.print();
    s.topElement();
    s.pop();
    s.print();
    s.topElement();
    s.pop();
    s.pop();
    s.pop(); // Will show message for empty stack
    return 0;
}
