class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;

        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* fwd = head;

        while(curr != NULL) {
            fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
        }

        return prev;
    }
};