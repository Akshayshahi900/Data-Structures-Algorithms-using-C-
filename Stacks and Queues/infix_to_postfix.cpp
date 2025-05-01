#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int priority(char ch)
{
    if (ch == '^')
    {
        return 3;
    }
    else if (ch == '*' or ch == '/')
    {
        return 2;
    }
    else if (ch == '+' || ch == '-')
    {
        return 1;
    }
    else
        return -1;
}

string infix_to_postfix(string s)
{
    int i = 0;
    int n = s.size();
    stack<char> st;
    string ans = "";
    while (i < n)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') or (s[i] >= 'A' && s[i] <= 'Z') or (s[i] >= '0' && s[i] <= '9'))
        {
            ans += s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            if (!st.empty()) st.pop(); // Remove the '(' from stack
        }
        else
        {
            while (!st.empty() && priority(s[i]) <= priority(st.top()))
            {
                ans += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        i++;
    }
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    return ans;
}

int main()
{
    string s = "a+b-(c^4+d)-a*b+(c^d)";
    string ans = infix_to_postfix(s);
    cout << "The Postfix expression for " << s << " is " << ans << endl;
    return 0;
}