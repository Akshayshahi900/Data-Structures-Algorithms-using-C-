#include <iostream>
using namespace std;
#include <bits/stdc++.h>
class Stack
{
public:
    queue<int> q;
    void Push(int n)
    {
        int s = q.size();
        q.push(n);

        for (int i = 1; i <= s; i++)
        {
            q.push(q.front());
            q.pop();
        }
    }
    int Pop()
    {

        int el = q.front();
        q.pop();
        return el;
    }
    int Top()
    {
        return q.front();
    }
    int Size()
    {
        return q.size();
    }
};

int main()
{
    Stack s;
    s.Push(3);
    s.Push(2);
    s.Push(4);
    s.Push(1);
    cout << "Top of the stack: " << s.Top() << endl;
    cout << "Size of the stack before removing element: " << s.Size() << endl;
    cout << "The deleted element is: " << s.Pop() << endl;
    cout << "Top of the stack after removing element: " << s.Top() << endl;
    cout << "Size of the stack after removing element: " << s.Size();
}