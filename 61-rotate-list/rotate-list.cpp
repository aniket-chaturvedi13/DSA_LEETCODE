/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int length(ListNode* head) {
        int len = 0;
        ListNode* temp = head;
        while(temp != NULL) {
            len++;
            temp = temp -> next;
        }
        return len;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        int len = length(head);

        if(head == NULL) return head;

        ListNode* temp = head;
        ListNode* tail = head;

        k %= len;
        for(int i = 1; i < len; i++) {
            if(i < len-k) temp = temp -> next;
            tail = tail -> next;
        }

        tail->next = head;
        head = temp->next;
        temp->next = NULL;

        return head;
    }
};