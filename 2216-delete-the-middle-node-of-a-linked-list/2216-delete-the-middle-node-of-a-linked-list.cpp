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
    ListNode* deleteMiddle(ListNode* head) {
        //empty list or single node
        if ( head == NULL || head->next == NULL) 
            return NULL;

        ListNode* slow = head;
        ListNode* fast = head;
        
        //extra 1 fast when slow is not moved ie. skipping 1 slow
        fast  = fast->next->next; 
        
        //traversing while moving fast by 2 nodes and slow by 1 node till fast reaches null. If fast reaches null means slow is pointing to the node before the middle node
        while (fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* middle = slow->next;
        //attach the next of slow to next next by skipping the middle and later on free it for cpp
        slow->next = slow->next->next;
        delete middle;
        return head; 
    }
};