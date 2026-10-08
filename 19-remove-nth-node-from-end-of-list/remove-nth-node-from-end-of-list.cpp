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
    int get_length(ListNode* head) {
        ListNode* temp = head;
        int n = 0;
        while(temp != NULL) {
            n++;
            temp = temp->next;
        }
        return n;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int length = get_length(head);

        if(length == n) return head->next;

        ListNode* temp = head;

        for(int i = 1; i < length-n; i++) {
            temp = temp->next;
        }
        
        temp->next = temp->next->next;

        return head;
    }
};