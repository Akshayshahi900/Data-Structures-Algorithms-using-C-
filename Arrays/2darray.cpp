#include <iostream>
using namespace std;
bool isPresent(int arr[][4], int key, int row, int column)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == key)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[3][4];
    // taking user input

    cout << "Enter the elements of the 2d array.";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    // printing the stored array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // searching element in the 2d array
    int key;
    cout << "enter the key to search in the two 2d array to search." << endl;
    cin >> key;

    // searching to find element in the array
    if (isPresent(arr, key, 3, 4))
    {
        cout << "Element found" << endl;
    }
    else if (!isPresent(arr, key, 3, 4))
    {
        cout << "Element not found" << endl;
    }
    return 0;
}
