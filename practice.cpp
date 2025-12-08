
};

void insertathead(Node* & head, Node* &tail, int val){
    //initially if ll is empty 
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
    }
    // ll is not empty 
    else {
        newnode->next = head ;
        head = newnode;
    }
}

// insert at tail in linked list
void insertattail(Node* &head, Node* &tail, int val){
   
    Node* newnode = new Node(val);
     // initially if ll is empty
    if(head == NULL){
        insertathead(head, tail, val);
    }

    else{
        tail->next = newnode;
        tail = newnode;
    }
}

void printll(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int getlength(Node* &head){
    Node* temp = head;
    int len = 0;
    while(temp != NULL){
        temp = temp->next;
        len++;
    }
    return len;
}


// insert at position 
void insertatposition(int position, int val, Node* &head, Node* &tail){
    Node* temp = head;
    int len = getlength(head);
    if(head == NULL){
        Node* newnode = new Node(val);
        head = newnode;
        tail = newnode;
    }
    else if(position == 1){
        insertathead(head, tail, val);
    }
    else if(position == len + 1){
        insertattail(head, tail, val);
    }
    for(int i = 0; i < position - 2; i++){
        temp = temp->next;
    }
    // ab to aa gye n 10 pe 
    Node* newnode = new Node(val);
    newnode->next = temp->next;
    temp->next =newnode;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    insertathead(head, tail, 5); // ll is 5
    insertathead(head, tail, 10); // ll is 10-> 5
    insertathead(head, tail, 0); // ll is 15->10->5
    // current ll: 15->10->5

    insertattail(head, tail, 5);  //  l: 15-l>10->5-> 5
    insertattail(head, tail, 10);  //  l: 15-l>10->5-> 5 ->10
    insertattail(head, tail, 0); //l: 15-l>10->5-> 5->10->15
    printll(head);

    cout << "Length is: " << getlength(head) << endl;
    insertatposition(1, 11, head, tail); 
    printll(head);
    insertatposition(2, 12, head, tail); 
    printll(head);
    insertatposition(3, 13, head, tail); 
    printll(head);
    insertatposition(4, 14, head, tail); 
    printll(head);
    insertatposition(5, 15, head, tail); 
    printll(head);
    insertatposition(6, 16, head, tail); 
    printll(head);
    return 0;
}
