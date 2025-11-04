// linked_list class -1
//gfdgdgdgf
// fhbfabfabfd
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
    heap(dynamic memory allocation use)
    Node* first = new Node();
    cout << "Hello world!" << endl;
    return 0;
}

// waap to find sum of altrnates valuesin starting from first node 
#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createList(int n) {
    Node* head = nullptr, *temp = nullptr;
    for (int i = 0; i < n; i++) {
        Node* newNode = new Node();
        cin >> newNode->data;
        newNode->next = nullptr;

        if (head == nullptr)
            head = temp = newNode;
        else {
            temp->next = newNode;
            temp = newNode;
        }
    }
    return head;
}



int sumOfAlternate(Node* head) {
    int sum = 0;
    bool take = true;
    while (head != nullptr) {
        if (take) sum += head->data;
        take = !take;
        head = head->next;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;
  cout << "Enter elements:\n";
   
 Node* head = createList(n);

  
  cout << "Sum of alternate nodes (starting from first): " << sumOfAlternate(head);
    return 0;
}


