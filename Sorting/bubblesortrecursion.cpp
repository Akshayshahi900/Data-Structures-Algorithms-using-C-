#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void bubbleSort(vector<int> &arr, int n)
{
    if (n == 1)
        return;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    // recurise call for n-1
    bubbleSort(arr, n - 1);
}
int main()
{
    vector<int> arr = {5, 2, 1, 7, 4, 2};
    cout << "Before Sorting" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubbleSort(arr, arr.size() - 1);
    cout << "After Sorting" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}