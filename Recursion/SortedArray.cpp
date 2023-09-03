#include <iostream>
using namespace std;

bool isSorted(int arr[], int size){
    // base case
    if(size == 0 || size ==1){
        return true;
    }

    if(arr[0] > arr[1]){
        return false;
    }
    else{
        bool remaining = isSorted(arr+1, size-1);
        return remaining;
    }
}

int main(){

    int arr[]={2,3,4,8,6,};
    int size = 5;

    bool ans = isSorted(arr,5);

    if(ans == 1){
        cout << "Array is sorted";
    }
    else{
        cout << "Array is not sorted";
    }


    return 0;
}