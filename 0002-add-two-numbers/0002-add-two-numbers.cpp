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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyNode = new ListNode(-1);
        ListNode* curr = dummyNode;
        int carry = 0;

        while(l1!=NULL || l2!=NULL){
            int sum = carry;
            if(l1) {
                sum = sum + l1->val;
                l1=l1->next;
            }
            if(l2) {
                sum = sum + l2->val;
                l2=l2->next;
            }
            curr->next = new ListNode(sum%10);
            curr=curr->next;
            carry = sum/10;
        }
        if (carry){
            ListNode* newNode = new ListNode(carry);
            curr->next = newNode;
        }
        return dummyNode->next;    
    }
};