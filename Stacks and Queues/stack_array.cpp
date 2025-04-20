#include <iostream>
using namespace std;

class Stack
{
public:
    int arr[100];
    int top = -1;

    void push(int data)
    {
        top++;
        arr[top] = data;
    }
    void pop()
    {
        top--;
    }
    void size()
    {
        cout << "Size is:" << top + 1 << endl;
    }
    void print()
    {
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    Stack St;
    St.push(5);
    St.print();

    St.push(4);
    St.print();

    St.pop();
    St.print();

    St.push(3);
    St.push(6);
    St.push(7);
    St.push(9);
    St.print();

    St.pop();
    St.print();

    St.size();
    St.pop();

    St.print();
}
