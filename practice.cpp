// today we are practicing linked list
// and this is our class no. 1 

// linked_list class -1
#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

  // constructor
    Node(int value){
        this->data = value;
        this->next = NULL;
        // starting me jb bhi koi new node craete krte h to uske next k andar by default null value daalte h
    }
};

int main() {
    // stack
    Node first;
    // heap(dynamic memory allocation use)
    Node* first = new Node();
    cout << "Hello world!" << endl;
    return 0;
}


// wap to convert decimal into binary using backtracking 
#include<iostream>
using namespace std;
