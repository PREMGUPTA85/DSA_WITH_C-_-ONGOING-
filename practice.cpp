
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
              
