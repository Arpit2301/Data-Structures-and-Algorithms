#include <iostream>
using namespace std;

bool binarySearch(int *arr, int start, int end, int key){
    // base case
    if (start <= end){
        int mid = start + (end - start) / 2;

        if(arr[mid] == key){
            return true;
        }

        if(arr[mid] < key){
            return binarySearch(arr, mid + 1, end, key);
        }
        else{
            return binarySearch(arr, start, mid - 1, key);
        }
    }
    
    return false;
}

int main() {
    int arr[6] = {3, 5, 7, 11, 15, 17};
    int size = 6;
    int key = 0;

    bool ans = binarySearch(arr, 0, size - 1, key);

    if(ans){
        cout << "Present";
    }
    else{
        cout << "Absent";
    }

    return 0;
}
