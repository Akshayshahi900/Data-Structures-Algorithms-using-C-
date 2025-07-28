#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isOperand(char ch)
{
    return (ch >= 'a' && ch <= 'z') or (ch >= 'A' && ch <= 'Z') or (ch >= '0' && ch <= '9');
}
string prefix_to_infix(string s)
{
    int n = s.length();
    int i = n-1;
    stack<string> st;
    while (i>=0)
    {
        if (isOperand(s[i]))
        {

            st.push(string(1, s[i]));
        }
        else
        {
            string top1 = st.top();
            st.pop();
            string top2 = st.top();
            st.pop();
            string x = '(' + top1 + s[i] + top2 + ')';
            st.push(x);
        }
        i--;
    }
    return st.top();
}
int main()
{
    string prefix = "*+pq-mn";
    string infix = prefix_to_infix(prefix);
    cout << "The Infix expression is: " << infix << endl;
}