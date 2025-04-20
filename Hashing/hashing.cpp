#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int hash[26] = {0};
    getline(cin, s);
    // hashing
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }
    // printing hashed
    for (int i = 0; i < 26; i++)
    {
        cout << (char)(i + 'a') << ": " << hash[i] << endl;
    }
}
