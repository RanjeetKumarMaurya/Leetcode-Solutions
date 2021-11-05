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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *node = new ListNode(1);
        ListNode* temp = node;
        while(l1 != NULL && l2 != NULL){
            if(l1->val < l2->val){
                node->next = l1;
                node = node->next;
                l1 = l1->next;
            }
            else{
                node->next = l2;
                node = node->next;
                l2 = l2->next;
            }
        }
        if(l1 == NULL)
            node->next = l2;
        else
            node->next = l1;
        return temp->next;
    }
};