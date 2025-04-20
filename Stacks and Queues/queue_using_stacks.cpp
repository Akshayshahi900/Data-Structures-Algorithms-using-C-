#include <iostream>
using namespace std;
#include <bits/stdc++.h>
/*
class Queue
{
public:
    stack<int> input, output;

    void Push(int x)
    {
        while (input.size())
        {
            output.push(input.top());
            input.pop();
        }
        input.push(x);
        while (output.size())
        {
            input.push(output.top());
            output.pop();
        }
    }

    int Pop()
    {
        int el = input.top();
        input.pop();
        return el;
    }

    int Peek() { return input.top(); }

    bool Empty() { return input.empty(); }
};
*/

class Queue
{
public:
    stack<int> input, output;

    Queue()
    {
    }
    void Push(int n)
    {
        cout << "The element pushed is " << n << endl;
        input.push(n);
    }
    int Pop()
    {
        if (output.empty())
        {
            while (input.size())
            {
                output.push(input.top());
                input.pop();
            }
        }
        int x = output.top();
        output.pop();
        return x;
    }
    int Peek()
    {
        if(output.empty()){
            while(input.size()){
                output.push(input.top());
                input.pop();
            }
        }
        return output.top();
    }
    int Size(){
        return (output.size() + input.size());
    }
};
int main()
{
    Queue q1;

    q1.Push(5);
    cout << "Top element is " << q1.Peek() << endl;

    q1.Push(7);
    cout << "Top element is " << q1.Peek() << endl;

    q1.Push(4);
    cout << "Top element is " << q1.Peek() << endl;

    q1.Push(8);
    cout << "Top element is " << q1.Peek() << endl;

    q1.Push(0);
    cout << "Top element is " << q1.Peek() << endl;

    cout << q1.Pop() << endl;
    cout << "Top element is " << q1.Peek() << endl;

    cout << q1.Pop() << endl;
    cout << "Top element is " << q1.Peek() << endl;

    cout << q1.Pop() << endl;
    cout << "Top element is " << q1.Peek() << endl;
}
