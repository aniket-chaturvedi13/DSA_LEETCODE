class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(-1);
        ListNode* a = list1;
        ListNode* b = list2;
        ListNode* c = dummy;

        while(a != NULL && b != NULL) {
            if(a->val < b->val) {
                c->next = a;
                a = a->next;
            }
            else {
                c->next = b;
                b = b->next;
            }
            c = c->next;
        }
        
        if(a != NULL) c->next = a;
        else c->next = b;

        return dummy->next;

    }
    ListNode* sortList(ListNode* head) {
        if(head == NULL or head->next == NULL) return head;
        // step:1 Break the list into two halves
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* head2 = slow->next;
        slow->next  = NULL;
        head = sortList(head);
        head2 = sortList(head2);
        return mergeTwoLists(head, head2);
    }
};