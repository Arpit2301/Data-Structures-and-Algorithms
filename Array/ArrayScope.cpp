#include <iostream>
using namespace std;

void update(int arr[], int n)
{
    cout << endl  << "Inside the func" << endl;
    arr[0] = 120; // update possile bcoz base address(first address) of array is send not array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << "Back to main func" << endl;;
}

int main()
{
    int arr[3] = {2, 5, 6};
    update(arr, 3);

    cout << "Print Main function" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
}