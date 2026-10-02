
class Solution {
public:
    int length(ListNode* head) {
        ListNode* temp = head;
        int len = 0;
        while(temp != nullptr) {
            len++;
            temp = temp -> next;
        }
        return len;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;

        int n1 = length(headA);
        int n2 = length(headB);

        for(int i = 1; i <= abs(n1-n2); i++) {
            if(n1 > n2) temp1 = temp1->next;
            else temp2 = temp2->next;
        }

        while(temp1 != temp2) {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        return temp1;

    }
};