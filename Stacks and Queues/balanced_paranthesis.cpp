/*Whenever we get the opening bracket we will push it into the stack. I.e ‘{‘, ’[’, ’(‘.
Whenever we get the closing bracket we will check if the stack is non-empty or not.
If the stack is empty we will return false, else if it is nonempty then we will check if the topmost element of the stack is the opposite pair of the closing bracket or not.
If it is not the opposite pair of the closing bracket then return false, else move ahead.
After we move out of the string the stack has to be empty if it is non-empty then return it as invalid else it is a valid string.*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isValid(string s){
    stack<char> st;
    for (auto it : s)
    {
        if (it == '{' || it == '(' || it == '[')
            st.push(it);
        else
        {
            if (st.empty())
                return false;
            char ch = st.top();
            st.pop();
            if ((it == ')' && ch == '(') or (it == ']' && ch == '[') || (it == '}' && ch == '{'))
                continue;
            else  return false;
        }
    }
    return st.empty();
}

int main()
{
    string a = "(){}()";
    if (isValid(a))
    {
        cout << "Valid string" << endl;
    }
    else
        cout << "Invalid" << endl;
}