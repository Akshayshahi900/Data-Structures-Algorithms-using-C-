#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int hash[256] = {0};
    getline(cin, s);
    // hashing
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++;
    }
    // printing hashed
    for (int i = 0; i < 256; i++)
    {
        cout << (char)(i) << ": " << hash[i] << endl;
    }
}
