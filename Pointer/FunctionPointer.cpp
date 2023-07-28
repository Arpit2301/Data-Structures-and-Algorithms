// function with pointer

#include <iostream>
using namespace std;

void print(int *p){
    cout << p << endl;
    cout << *p << endl;
}

void update(int *p){
   // p = p+1;            // value not updating
   *p = *p+1;     // updating
}

int getsum(int arr[], int n){     // int arr[n]=int *arr
    int sum = 0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    return sum;
}

int main() {
    int value = 5;
    int *p = &value;
 //   print(p);
    
    // cout << p << endl;
    // update(p);                       // wrong no update
    // cout << p << endl;
    
     cout <<"Before " << *p << endl;
     update(p);
     cout << "After " << *p << endl;
     
     
     int arr[6]= {2,4,3,6,5,9};
     cout << "Sum is " << getsum(arr, 5) << endl; 
     cout << "Sum of part " << getsum(arr + 3, 3) << endl;   // part of array is passed
    return 0;
}