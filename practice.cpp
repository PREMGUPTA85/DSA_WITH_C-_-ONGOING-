

Node* PrintMid(Node* head){
    if(head==nullptr) return nullptr;
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

int main(){
    Node* head=NULL;
    Node* tail=NULL;
    for(int i=1;i<=9;i++){
        Node* newNode=new Node();
        newNode->data=i;
        newNode->next=NULL;
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }

    Node* mid=PrintMid(head);
    cout<<mid->data;

    return 0;
}
