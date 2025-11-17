// Merge two sorted linked lists
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {

        if (!head1) return head2;
        if (!head2) return head1;

        ListNode* mergedHead = nullptr;

        if (head1->val < head2->val) {
            mergedHead = head1;
            head1 = head1->next;
        }
 else {
            mergedHead = head2;
            head2 = head2->next;
       }

        ListNode* mergedTail = mergedHead;
 while (head1 && head2) {
            if (head1->val < head2->val) {
                mergedTail->next = head1;
                head1 = head1->next;
            } else {
        
