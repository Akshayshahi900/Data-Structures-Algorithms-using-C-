#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isOperand(char ch)
{
    return (ch >= 'a' && ch <= 'z') or (ch >= 'A' && ch <= 'Z') or (ch >= '0' && ch <= '9');
}
string prefix_to_postfix(string s)
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
            string x = top1 + top2 + s[i];
            st.push(x);
        }
        i--;
    }
    return st.top();
}
int main()
{
    string prefix = "/-ab*+def";
    string postfix = prefix_to_postfix(prefix);
    cout << "The Postfix expression is: " << postfix << endl;
}