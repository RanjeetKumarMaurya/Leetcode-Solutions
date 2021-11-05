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
    int length(ListNode *head){
        int i = 0;
        while(head != NULL){
            i++;
            head = head->next;
        }
        return i;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int m = length(headA);
        int n = length(headB);
        int d = abs(m-n);
        ListNode *intersectionNode = NULL;
        
        if(m > n){
            while(d--)
                headA = headA->next;
        }
        else if(n > m){
            while(d--)
                headB = headB->next;
        }
        
        while(headA != NULL && headB != NULL){
            if(headA == headB)
                break;
            headA = headA->next;
            headB = headB->next;
        }
        
        return headA;
    }
};