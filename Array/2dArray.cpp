#include <iostream>
using namespace std;
// search func
bool search(int arr[][3], int target, int row, int col)
{
    for (int i = 0; i < row; i++)    // for row
    {  
        for (int j = 0; j < col; j++)   // for col
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

// row wise sum
void sum(int arr[][3], int row, int col)
{
   
    for (int row = 0; row < 3; row++)
    { 
         int sumi=0;
        for (int col = 0; col < 3; col++)
        {
            sumi += arr[row][col];
        }
        cout << sumi << " ";
      
    }
      cout << endl;
}

int main()
{
    int arr[3][3]; // create 2d array
    for (int i = 0; i < 3; i++)
    { // taking ip
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    { // print op
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // search element
    int target;
    cout <<"Enter target element";
    cin >> target;

    if (search(arr, target, 3, 3))
    {
        cout << "Element Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
     cout << "Row wise sum is " ;

     sum(arr, 3, 3);

    return 0;
}