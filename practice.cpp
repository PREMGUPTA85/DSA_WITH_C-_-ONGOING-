
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
