#include <iostream>
#include <queue>
using namespace std;

int main(){
    // create queue
    queue<int> q;

    q.push(12);
    cout << "Front is " << q.front() << endl;


    q.push(18);
    q.push(13);
    cout << "Front is " << q.front() << endl;

    cout <<"Size of Queue is " << q.size() << endl;

    q.pop();
     cout << "Front is " << q.front() << endl;

    cout <<"Size of Queue is " << q.size() << endl;

    if(q.empty()){
        cout <<"Empty";
    }else{
        cout <<"Not Empty";
    }

}

