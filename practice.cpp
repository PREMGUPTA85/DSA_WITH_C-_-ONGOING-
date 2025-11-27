
    Node *flatten(Node *head)
    {
        if (!head)
            return nullptr;
        solve(head);
        return head;
    }
};
