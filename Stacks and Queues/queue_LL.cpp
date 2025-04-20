#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int x)
    {
        this->data = x;
        this->next = nullptr;
    }
};
class Queue
{
public:
    Node *start, *end;
    int size = 0;

    Queue()
    {
        start = end = nullptr;
        size = 0;
    }
    void push(int x)
    {
        Node *temp = new Node(x);
        if (start == NULL)
        {
            start = end = temp;
        }
        else
        {
            end->next = temp;
        }
        size++;
    }
    void pop()
    {
        Node *temp = NULL;
        if (start == NULL)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        temp = start;
        start = start->next;
        delete temp;
        size -= 1;
    }
    void top()
    {
        if (start == NULL)
        {
            return;
        }
        cout << "Top is: " << start->data << endl;
    }
    void print()
    {
        Node *temp = start;

        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    Queue q;
    q.push(5);
    q.push(4);
    q.top();
    q.push(6);
    q.push(2);

    q.print();

    q.pop();
    q.top();
    q.pop();
    q.pop();

    q.top();
    q.print();
}