#include <iostream>
using namespace std;

void swap(int arr[], int n){
    for(int i=0; i<n; i=i+2){
        if(i+1<n){
            swap(arr[i], arr[i+1]);
        }
    }
}

void print(int arr[], int n){
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}

int main(){
    int even[6]={2,4,3,6,5,7};
    int odd[5]={2,5,4,6,8};

    swap(even,6);
    print(even,6);

    swap(odd,5);
    print(odd,5);

}