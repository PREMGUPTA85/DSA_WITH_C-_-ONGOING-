

int main() {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;
    cout << "Enter elements:\n";
    Node* head = createList(n);

    cout << "Sum of alternate nodes (starting from first): " << sumOfAlternate(head);
    return 0;
}
