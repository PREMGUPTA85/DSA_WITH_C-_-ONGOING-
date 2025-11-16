

Node* reverse(Node* head) {
    Node* prev = NULL;
    Node* curr = head;


bool isloop(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;          // Move slow by one
        fast = fast->next->next;    // Move fast by two

        if (slow == fast) {
            return true; // Loop detected
        }
    }
    return false; // No loop
}
