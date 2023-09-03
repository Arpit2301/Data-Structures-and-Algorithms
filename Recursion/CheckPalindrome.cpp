// Check whether the string is palindrome or not

#include <iostream>
using namespace std;

bool palindrome(string str, int i, int j){
    // base case
    if(i>j){
        return true;
    }

    if(str[i]!=str[j]){
        return false;
    }
    else{
        return palindrome(str, i+1, j-1);
    }
}

int main() {
    string name = "abca";
    bool ans = palindrome(name, 0, name.length()-1);

    if(ans==1){
    cout << "is Palindrome";
    }
    else{
    cout << "Not a palindrome";
    }
}

    