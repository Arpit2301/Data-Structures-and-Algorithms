#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;

    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int evearr[6]= {4,2,6,3,8,9};
    int oddarr[5]= {5,4,2,7,4};

    reverse(evearr,6);
    reverse(oddarr,5);

    printArray(evearr, 6);
    printArray(oddarr, 5);

}