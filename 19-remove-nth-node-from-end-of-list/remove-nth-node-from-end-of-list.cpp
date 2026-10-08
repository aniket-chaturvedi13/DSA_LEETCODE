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
        ListNode* temp = head;
        int n = 0;
        while(temp != NULL) {
            n++;
            temp = temp->next;
        }
        return n;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* temp = head;
        int len = length(head);

        if(len == 1) return NULL;
        if(len == n) return head->next;

        for(int i = 1; i < len-n; i++) {
            temp = temp->next;
        }
        temp->next = temp->next->next;

        return head;
    }
};