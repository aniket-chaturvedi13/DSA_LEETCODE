class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr) return head;
        ListNode* i = head;
        ListNode* j = head;

        while(j != nullptr) {
            if(i->val == j->val) j = j->next;
            else {
                i->next = j;
                i = j;
            }
        }

        i->next = nullptr;
        return head;
          
    }
};