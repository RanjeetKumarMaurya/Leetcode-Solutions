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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL)
            return head;
        ListNode* low = head;
        ListNode* high  = head;
        ListNode* pre = NULL;
        
        while(n--)
            high = high->next;
        if(high==NULL){
            return low->next;
        }
        while(high != NULL){
            pre = low;
            high = high->next;
            low = low->next;
        }
        if(low==NULL)
            return head;
        pre->next = low->next;
        return head;
    }
};