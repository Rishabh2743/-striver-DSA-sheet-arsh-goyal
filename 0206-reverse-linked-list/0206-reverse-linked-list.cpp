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
     if(head==NULL){
         return NULL;
     }
        ListNode* pre=NULL;
        ListNode* Ne;
        ListNode* curr= head;
        while(curr){
            Ne=curr->next;
            curr->next = pre;
            pre= curr;
            curr= Ne;         
        }
        head=pre;
        return head;
    }
};
        