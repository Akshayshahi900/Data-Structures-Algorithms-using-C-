#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void insertionSort(vector<int> &arr, int i, int n)
{
    int j = i;
    if (i == n)
        return;
    while (j > 0 && arr[j - 1] > arr[j])
    {
        swap(arr[j - 1], arr[j]);
        j--;
    }

    // recursive call
    insertionSort(arr, i + 1, n);
}
int main()
{
    vector<int> arr = {5, 3, 1, 6, 8, 2, 1, 4, 6, 7, 2, 1, 6, 3, 7, 2, 1, 19};
    int n = arr.size() - 1;

    cout << "Array before sorting" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    insertionSort(arr, 0, n);
    cout << endl;
    cout << "Array after sorting" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}