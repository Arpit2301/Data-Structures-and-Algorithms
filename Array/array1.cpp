#include <iostream>

using namespace std;
//array with function
void printArray(int arr[], int size) {
    for(int i=0; i<size; i++) {
        cout << arr[i];
    }
}

int main()
{
    int number[5];
    cout << "Value at index 4 is " << number[4] << endl;
    cout << "Value at index 2 is " << number[2] << endl;

    int second[3] = {2, 3, 4};
    cout << "Value at index 2 is " << second[2] << endl;

    int third[10] = {2, 5};
    int n = 10;
    printArray(third,10); // array func
    int thirdsize = sizeof(third)/sizeof(int);
    cout << "size of third is " << thirdsize << endl;
}    