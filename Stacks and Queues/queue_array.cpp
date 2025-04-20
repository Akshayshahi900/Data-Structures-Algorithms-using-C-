#include <iostream>
using namespace std;
#define MAX 100

class Q
{

    int q[MAX], arrSize = 0, start = -1, end = -1;

public:
    void push(int x)
    {
        if (arrSize == MAX)
        {
            cout << "Queue is full" << endl;
            return;
        }
        if (arrSize == 0)
        {
            start = 0;
            end = 0;
        }
        else
        {
            end = (end + 1) % arrSize;
        }

        q[end] = x, arrSize++;
    }

    int pop()
    {
        int el = q[start];
        if (arrSize == 0)
        {
            cout << "Queue is empty" << endl;
            return 0;
        }
        if (arrSize == 1)
        {
            start = end = -1;
        }
        else
        {
            start = (start + 1) % arrSize;
        }
        arrSize -= 1;
        return el;
    }
    int top()
    {
        if (arrSize == 0)
        {
            cout << "Queue is empty" << endl;
        }
        return q[start];
    }
    void size()
    {
        cout << "Size of the Queue is :" << arrSize << endl;
    }
    void print()
    {
        for (int i = start; i <= end; i++)
        {
            cout << q[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Q q1;
    q1.push(4);
    q1.print();

    q1.push(8);
    q1.print();

    q1.push(5);
    q1.print();

    q1.push(2);
    q1.print();

    q1.push(9);
    q1.print();

    q1.push(1);
    q1.print();

    q1.pop();
    q1.pop();
    q1.pop();
    q1.pop();
    q1.pop();
    q1.pop();
    q1.print();
    q1.top();

    return 0;
}
