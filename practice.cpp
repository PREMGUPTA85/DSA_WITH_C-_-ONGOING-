
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
