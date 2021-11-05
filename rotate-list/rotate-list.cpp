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
    int lenght(ListNode* head){
        int i = 0;
        while(head!=NULL){
            i++;
            head = head->next;
        }
        return i;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || k==0)
            return head;
        int size = lenght(head);
        k = k % size;
        if(k==0)
            return head;
        
        ListNode* slow = head;
        ListNode* fast = head;
        while(k--)
            fast = fast->next;
        
        while(fast->next!=NULL){
            slow = slow->next;
            fast = fast->next;
        }
        ListNode* temp = slow->next;
        slow->next=NULL;
        fast->next= head;
        return temp;
        
    }
};