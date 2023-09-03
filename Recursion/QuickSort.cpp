// Implement Quick sort 

#include <iostream>
using namespace std;

int partition(int arr[], int s, int e){
    int pivot = arr[s];

    int cnt = 0;
    for(int i=s+1; i<=e; i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }

    // place pivot at right position 
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    // left and right part sambhal lo
    int i = s, j = e;

    while(i<pivotIndex && j>pivotIndex){
        while(arr[i] <= pivot){                      // pivot is the element that placed in right position in first pass
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e){
    // base case, either array is empty or have single element ---> already sorted hai
    if(s>=e){
        return;
    }

    // partition krlo
    int p = partition(arr,s,e);

    // left part sort kro
    quickSort(arr,s,p-1);

    // right part sort kro
    quickSort(arr,p+1,e);
}

int main() {
    int arr[8]= {2,4,0,1,6,9,9,9};
    int n = 8;

    quickSort(arr,0,n-1);

    for(int i=0; i<n; i++){
        cout << arr[i];
    }

    return 0;
}