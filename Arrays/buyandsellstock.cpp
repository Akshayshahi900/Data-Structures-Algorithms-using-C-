#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void maxProfit(vector<int> &prices)
{
    int buy = INT_MAX;
    int sell = INT_MIN;
    int n = prices.size();
    for (int i = 0; i < n; i++)
    {
        if (prices[i] < buy)
        {
            buy = prices[i];
        }
        if (prices[i] > sell)
        {
            sell = prices[i];
        }
    }
    cout << buy << "  " << sell << endl;
    // return sell - buy;
}
int main()
{
    vector<int> prices = {1, 4, 5, 7, 8};

    maxProfit(prices);
}