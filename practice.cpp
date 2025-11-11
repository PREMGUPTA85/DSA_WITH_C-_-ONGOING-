// today task completed

class Solution
{
public:
    Node *solve(Node *head)
    {
        auto it = head;
        auto tail = it; // for tracking tail node.

        while (it)
        {
            if (it->child)
            {
                auto childTail = solve(it->child); // tail node
                // flatten ka kaam
                auto temp = it->next;
                it->next = it->child;
                it->next->prev = it;
                childTail->next = temp;
                if (temp)
                    temp->prev = childTail;
                it->child = nullptr;
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

void insertAtHead(int value, Node* &head, Node* &tail) {
    //2 cases -> LL is empty / non-empty
  //empty wala case
  if(head == NULL && tail == NULL) {
  
