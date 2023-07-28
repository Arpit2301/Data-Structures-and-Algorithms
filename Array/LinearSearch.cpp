#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}



int main()
{
    int arr[10] = {1, 3, 2, 5, 6, 8, 7, 90, 12, 34};
    cout << "Enter the element search for";
    int key;
    cin >> key;

    bool found = search(arr, 10, key);

    if (found)
    {
        cout << "Key is found";
    }
    else
    {
        cout << "Key is not found";
    }
}