/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;

        int n1 = 0;
        while(temp1 != nullptr) {
            temp1 = temp1 -> next;
            n1++;
        }
        int n2 = 0;
        while(temp2 != nullptr) {
            temp2 = temp2 -> next;
            n2++;
        }
        temp1 = headA;
        temp2 = headB;

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