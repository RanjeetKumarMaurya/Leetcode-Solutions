/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL)
            return NULL;
        Node* temp = head;
        Node* temp2 = NULL;
        unordered_map<Node*, Node*> map;
        
        //create copy of original list and map value to node address into map
        temp = head;
        Node* pre = NULL;
        Node* newNode = new Node(temp->val);
        temp2 = newNode;
        map[temp] = newNode;
        pre = newNode;
        temp = temp->next;
        while(temp){
            Node* newNode = new Node(temp->val);
            map[temp] = newNode;
            pre->next = newNode;
            pre = pre->next;
            temp = temp->next;
        }
        
        //update random pointer;
        Node* startOfCopyList = temp2;
        temp = head;
        unordered_map<Node*, Node*>::iterator it = map.begin();
        while(it != map.end()){
            if(it->first->random == NULL){
                it->second->random = NULL;
                it++;
            }
            else{
                it->second->random = map[it->first->random];
                it++;
            }
        }
        
        return startOfCopyList;
    }
};