#include <iostream>
using namespace std;

int getpivot(int arr[], int n){
    int s=0, e=n-1;
    int mid = s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid = s+(e-s)/2;
    }
    return s;        // last me s or e ek he index pr hoge , while false hoga then exit
}


int main(){
    int arr[5]={2,4,1,6,5};
    cout << "Pivot is at index:" << getpivot(arr,5);      // pivot - min element, use binarysearch

}