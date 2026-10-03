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
};