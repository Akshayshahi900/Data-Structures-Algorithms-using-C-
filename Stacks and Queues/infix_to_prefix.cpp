#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// function to check if a character is an operand or not
bool isOperand(char ch)
{
    return (ch >= 'a' && ch <= 'z') or (ch >= 'A' && ch <= 'Z') or (ch >= '0' && ch <= '9');
}

// function to return the precedence of the operators
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

// function to reverse the expression and interchange the paranthesis

string reverseExpression(string s)
{
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            s[i] = ')';
        }
        else
        {
            s[i] = '(';
        }
    }
    return s;
}

// function to convert infix to prefix expression

string infix_to_prefix(string infix)
{
    // Step:1 Reverse the given infix expression
    string reversedInfix = reverseExpression(infix);
    stack<char> st;
    string postfix = "";

    int i = 0;
    int n = reversedInfix.size();
    string ans = "";
    while (i < n)
    {
        if ((reversedInfix[i] >= 'a' && reversedInfix[i] <= 'z') or (reversedInfix[i] >= 'A' && reversedInfix[i] <= 'Z') or (reversedInfix[i] >= '0' && reversedInfix[i] <= '9'))
        {
            ans += reversedInfix[i];
        }
        else if (reversedInfix[i] == '(')
        {
            st.push(reversedInfix[i]);
        }
        else if (reversedInfix[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            if (!st.empty())
                st.pop(); // Remove the '(' from stack
        }
        else
        {
            while (!st.empty() && priority(reversedInfix[i]) <= priority(st.top()))
            {
                ans += st.top();
                st.pop();
            }
            st.push(reversedInfix[i]);
        }
        i++;
    }
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    string prefix = reverseExpression(ans);
    return prefix;
}

int main()
{
    string s = "a+b-(c^4+d)-a*b+(c^d)";

    string ans = infix_to_prefix(s);
    cout << "The Prefix expression for " << s << " is " << ans << endl;
    return 0;
}