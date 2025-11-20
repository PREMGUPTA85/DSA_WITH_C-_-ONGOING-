
            head = temp = newNode;
        else {
            temp->next = newNode;
            temp = newNode;
        }
    }
    return head;
}
