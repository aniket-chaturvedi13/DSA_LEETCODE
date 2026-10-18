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
    bool isPalindrome(ListNode* head) {
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

        while(a != NULL && b != NULL) {
            if(a->val != b->val) return false;
            a = a->next;
            b = b->next;
        }

        return true;
    }
};