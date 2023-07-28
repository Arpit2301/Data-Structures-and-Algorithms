// 2 character array
#include <iostream>

using namespace std;

int main()
{
  int arr[5]={1,2,3,4,5};
  char ch[6]= "abcde";
  
  cout << arr << endl; //address
  cout << ch << endl;             //string

  char *c = &ch[0];      
  cout << c << endl;  //print entire string
  
  char temp = 'z';
  char *p = &temp;
  cout << p << endl;   // bcoz null \0 not found so it moves on next 
    return 0;
}