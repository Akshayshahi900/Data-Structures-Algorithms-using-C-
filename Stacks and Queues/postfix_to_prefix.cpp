#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isOperand(char ch)
{
    return (ch >= 'a' && ch <= 'z') or (ch >= 'A' && ch <= 'Z') or (ch >= '0' && ch <= '9');
}
string postfix_to_prefix(string s)
{
    int n = s.length();
    int i = 0;
    stack<string> st;
    while (i<n)
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
            string x =s[i] + top2 +top1;
            st.push(x);
        }
        i++;
    }
    return st.top();
}
int main()
{
    string postfix = "ab-de+f*/";
    string prefix = postfix_to_prefix(postfix);
    cout << "The Prefix expression is: " << prefix << endl;
}