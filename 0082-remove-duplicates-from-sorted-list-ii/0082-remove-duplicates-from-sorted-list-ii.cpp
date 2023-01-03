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
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map<int,int> map;
        ListNode* temp=head;
        while(temp!=NULL){
            map[temp->val]++;
            temp=temp->next;
        }
        
        ListNode* prev=NULL;
        ListNode* curr=head;
        
        while(curr!=NULL){
            if(map[curr->val]>1){
                if(prev==NULL){
                    head=head->next;
                    curr=head;
                }
                else{
                    curr=curr->next;
                    prev->next=curr;
                }
            }
            else{
                prev=curr;
                 curr=curr->next;
            }
        }
        
        return head;
    }
};