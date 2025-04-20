#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
   for(int i =0 ; i < n ; i++){
    int mini =i ;
    for(int j = i+1 ; j <n ; j++){
        if(arr[j]< arr[mini]){
            mini = j;
        }
    }
    int temp = arr[mini];
    arr[mini] = arr[i];
    arr[i] = temp;
    
   }
    cout << "Array after sorting" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selectionSort(arr, n);
}