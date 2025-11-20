
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
