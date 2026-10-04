class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {

        if(head == NULL || head->next == NULL) return head;

        ListNode* dummy1 = new ListNode(-1);
        ListNode* dummy2 = new ListNode(-1);
        ListNode* temp = head;
        ListNode* temp1 = dummy1;
        ListNode* temp2 = dummy2;

        int i = 0;

        while(temp != NULL) {
            i++;
            if(i%2 == 1) { // ODD
                temp1->next = temp;
                temp1 = temp;
            }
            else { // EVEN
                temp2->next = temp;
                temp2 = temp;
            }
            temp = temp->next;
        }

        temp2->next = NULL;
        temp1->next = dummy2->next;

        return dummy1->next;

    }
};