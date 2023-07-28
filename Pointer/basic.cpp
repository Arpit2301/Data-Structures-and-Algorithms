#include <iostream>
using namespace std;

int main(){
    int num = 4;
    cout << "Add of num is " << &num << endl;;   // address of num
    
    int *ptr = &num;     // crete pointer 
    cout << "Address is " << ptr << endl;;
    cout << "Value is " << *ptr  << endl;         // value at add ptr

    (*ptr)++;     // 4+1
    cout <<  "Updated value is " << *ptr << endl;

    // copying pointer
    int *q = ptr;
    cout << ptr << " " << q << endl;
    cout << *ptr << " " << *q;
    
}