// 1 pointer & int array

#include <iostream>
using namespace std;

int main(){
    int arr[10]={2,4,5,8};
   
    // cout <<"Address of 1 index " << arr << endl;
    // cout <<"Address of 1 index " << &arr[0] << endl;
    
    // cout <<"Value at address 1 is " << *arr << endl;
    // cout <<"Add 1 in first index value " << *arr+1 << endl;
    // cout <<"Add 1 in first index value " << *(arr) +1 << endl;
    // cout <<"value of Position of arr[0]+1= " << *(arr+1) << endl;
    // cout <<"index 2 is " << arr[2] << endl;
    // cout <<"index 2 is " << *(arr + 2) << endl;
    
    // int i = 3;
    // cout <<i[arr] << endl; // i is 3 index
    
   /* int temp[10]={1,2};
    cout << "size of temp 4*10 is " <<sizeof(temp) << endl;
    cout << "size of * " <<sizeof(*temp) << endl;  
    cout << "size of & " <<sizeof(*temp) << endl;  
    int *ptr = &temp[0];
    cout << "size of pointer is always 8 byte =" << sizeof(ptr) << endl;
    cout << "size of pointer is always 8 byte =" << sizeof(*ptr) << endl;
    cout << "size of &ptr " <<sizeof(&ptr) << endl;  
    */
    
    int a[20] = {1,3,5,7};
    cout << &a[0] << endl;
    cout << &a << endl;
    cout << a << endl;
    cout << endl;
    
    
    int *p = &a[0];
    cout << "P " << &p[0] << endl;
    cout << "p " << &p << endl;
    cout << p << endl;
      
}