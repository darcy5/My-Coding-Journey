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
    ListNode* doubleIt(ListNode* head) {
        if(head == NULL ) return head;
        ListNode* cur=head;
        ListNode* carry=NULL;

        while(cur!=NULL){
            int mul = cur->val*2;
            if(mul<10){
                cur->val=mul;
            }
            else{
                cur->val=mul%10;
                if(carry == NULL){
                    ListNode* newNode = new ListNode(1);
                    head=newNode;
                    head->next=cur;
                }
                else{
                    carry->val+=1;
                }
            }
            carry=cur;
            cur=cur->next;
        }
        return head;
    }
};