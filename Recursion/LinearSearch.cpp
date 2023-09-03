#include <iostream>
using namespace std;

bool Search(int *arr, int size, int key){
    // base case
    if(size==0){                    //array is empty
        return false;
    }

    if(arr[0]==key){         //first element = key
        return true;
    }

    else{
        bool remaningPart = Search(arr+1, size-1, key);         // search  for remaining array
        return remaningPart;
    }
}
int main(){

    int arr[] = {2,4,1,5,6};
    int n = 5;
    int k =1;

    bool ans = Search(arr,5,9);         // search for 9 --absent

     if(ans){
        cout << "Present";
    }
    else{
        cout << "Absent";
    }
 


    return 0;
}