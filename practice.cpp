
            }
            tail = it;
            it = it->next;
        }
        return tail;
    }

    Node *flatten(Node *head)
    {
        if (!head)
            return nullptr;
        solve(head);
        return head;
    }
};
+
       
