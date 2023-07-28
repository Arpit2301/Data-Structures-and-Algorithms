#include <iostream>
using namespace std;
// maxfunc
int getMax(int num[], int n) {
    int maxi = INT8_MIN;

    for(int i=0; i<n; i++) {
        maxi = max(maxi, num[i]);  //inbuilt func


    }
    return maxi;
}

//min func
int getMin(int num[], int n) {
    int mini = INT8_MAX;
     for(int i=0; i<n; i++) {
        mini = min(mini, num[i]);  //inbuilt func


    }
    return mini;


}
int main() {
    int size;
    cin >> size;

    int num[100];
    for(int i=0; i<size; i++) {
        cin >> num[i];

    }
    cout << "Max Element is" << getMax(num,size) << endl;
    cout << "Min Element is" << getMin(num,size) << endl;
}