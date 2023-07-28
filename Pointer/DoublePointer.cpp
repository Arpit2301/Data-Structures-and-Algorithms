#include <iostream>
using namespace std;

int main(){

    int i = 5;
    int *p = &i;
    int **p2 = &p;

    // print value of i
    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;

// print address of p
    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl;

// adddres of p2
    cout << &p << endl;
    cout << p2 << endl;

    return 0;
}