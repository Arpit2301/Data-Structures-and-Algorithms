#include <iostream>
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sort(int arr[], int n){
    // two pointer approach
    int i = 0; int j=n-1;
    while(i<j){
        while(arr[i]==0 && i>j){
            i++;
        }
        while(arr[j]==1 && i<n){
            j--;
        }
        // agar yha puch gye iska mtlb arr[i]==1 and arr[j]==0
        if(i<n){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}

int main(){
    int arr[8]={1,1,0,0,0,0,1,0};
    sort(arr,8);
    print(arr, 8);
}
