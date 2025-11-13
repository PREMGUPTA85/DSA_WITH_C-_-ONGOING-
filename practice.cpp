
void insertAtPosition(int position,int value, Node* &head, Node* &tail ){
  //assume -> valid positions input
  int length = getLength(head);
if(position == 1) {
    
//insert at ahead krna chahta hu 
    head = insertAtHead(value, head, tail);
 
 }
  else if(position == length + 1) {
    //insert at tail krna chahta hu 
    insertAtTail(value, head, tail);
  }
  else {
    //insert in between kahin krna chahta hu 
    Node* temp = head;
    for(int i=0; i<position-2; i++) {
      temp = temp -> next;
    }
    Node* newNode = new Node(value);
    newNode->next = temp->next;
    temp->next = newNode;
  }
}
// asfdsfd
// sfzfsafas
//YYUIUIUGHIU
// TODAY DONE
