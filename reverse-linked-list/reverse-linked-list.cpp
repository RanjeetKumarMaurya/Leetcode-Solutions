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
    ListNode* reverseList(ListNode* head) {
        if(!head)
            return head;
        ListNode* temp = head;
        ListNode* pre = NULL;
        while(head->next!= NULL){
            ListNode* temp = head->next;
            head->next = pre;
            pre = head;
            head = temp;
        }
        head->next = pre;
        return head;
    }
};