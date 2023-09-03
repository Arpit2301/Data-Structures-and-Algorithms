// calculate power a^b

#include <iostream>
using namespace std;

int calculatePower(int a, int b){
    // base case
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    // recursive call
    int ans = calculatePower(a,b/2);

    if(b%2==0){              // b is even
        return ans*ans;
    }
    else{                      // b is odd
        return a*ans*ans;
    }

}

int main(){

    int a, b;
    cin >> a >> b;
    int result = calculatePower(a,b);      
    cout << "Power is " << result;

    return 0;
}