#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start + ( end - start)/2;  // oR start + end / 2

    while(start < end){
        if(arr[mid] == key){
            return mid;
        }

        if(key>arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + ( end - start)/2; 
    }
    return -1;
}

int main(){
    int even[6]={3,5,7,8,9,12};
    int odd[5]={4,6,9,11,13};

    int evenindex= BinarySearch(even, 6, 7);
    cout <<"Index is " << evenindex  <<endl;

    int oddindex= BinarySearch(odd, 5, 44);
    cout <<"Index is " << oddindex << endl;


}