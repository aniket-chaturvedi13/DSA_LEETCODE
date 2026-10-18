class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr != NULL) {
            ListNode* fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* slow = head; 
        ListNode* fast = head;

        //in case of odd reach at middle
        //in case of even reach at left middle
        while(fast->next != NULL and fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* a = head; 
        ListNode* b = slow->next;
        slow->next = NULL;
        b = reverse(b);

        ListNode* t1 = a;
        ListNode* t2 = b;

        while(t2 != NULL) {
            ListNode* f1 = t1->next;
            ListNode* f2 = t2->next;
            t1->next = t2;
            t1 = f1;
            t2->next = t1;
            t2 = f2;
        }
    }
};