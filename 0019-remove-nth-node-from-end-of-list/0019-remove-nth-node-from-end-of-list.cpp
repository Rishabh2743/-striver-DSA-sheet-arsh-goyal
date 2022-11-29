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
   int countNodes(ListNode* head) {
        int count=0;
        while(head!=NULL){
            head=head->next;
            count++;
        }
        return count;
    }
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = countNodes(head);
        if(n>size || (n==size && n==1)) {
            return NULL;
        }
        if(n==size) {
            head = head->next;
            return head;
        }
        ListNode* temp=head;
        for(int i=1; i<size-n; i++){
            temp=temp->next;
        }
        ListNode* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
        
        return head;
    }
};