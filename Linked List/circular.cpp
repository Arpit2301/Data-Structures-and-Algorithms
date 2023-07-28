#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    // constructor
    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }

    ~Node(){
        int value = this -> data;
        if(this-> next != NULL) {
            delete next;
            next  = NULL;
        }
         cout << "Memory free for node with data" << value << endl;
    }
};

void insertNode(Node* &tail , int element, int d) {
    // empty list
    if(tail == NULL) {
        Node* NewNode = new Node(d);
        tail = NewNode;
        NewNode -> next = NewNode;
    }
    else{
        // non empty list
        //assuming that element is present in list

        Node* curr = tail;

        while(curr->data != element) {
            curr = curr -> next;
        }

        // element found -> curr is representing elemnt wala node
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}

void deleteNode(Node* &tail, int value) {

    // empty list
    if (tail == NULL) {
        cout << "List is Empty" << endl;
        return;
    }
    else{
        // non empty and assuming value is present in list
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        // 1 node ll
        if(curr == prev) {
            tail = NULL;
        }

        //>=2 node ll
        else if(tail == curr) {
            tail = prev;          // kisi ko bhi point krdo kuki circular ll hai
        }
        curr -> next = NULL;
        delete curr;
    }
}

void print(Node* tail) {
    Node* temp = tail;

    // empty list 
    if(tail == NULL) {
        cout << "List is Empty" << endl;
        return;

    }

    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    } while (tail != temp);
    cout << endl;
   
    

}

int main() {
    Node* tail = NULL;

    // insert in empty list
    insertNode(tail,5,3);
    print(tail);

    // insertNode(tail, 3,5);
    // print(tail);

    // insertNode(tail, 5,7);
    // print(tail);

    // insertNode(tail, 7,9);
    // print(tail);

    // insertNode(tail,5,6);
    // print(tail);

    // deleteNode(tail, 3);
    // print(tail);

    // deleteNode(tail, 9);
    // print(tail);

    deleteNode(tail, 3);
    print(tail);

    return 0;
}
