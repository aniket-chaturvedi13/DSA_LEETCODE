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
                c = a;
                a = a->next;
            }
            else {
                c->next = b;
                c = b;
                b = b->next;
            }
        }
        while(a != NULL) {
            c->next = a;
            c = a;
            a = a->next;
        }
        while(b != NULL) {
            c->next = b;
            c = b;
            b = b->next;
        }

        return dummy->next;
        
    }
};