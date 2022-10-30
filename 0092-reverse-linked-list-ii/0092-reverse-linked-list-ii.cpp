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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
      ListNode *newhead=head;
        ListNode *p=head;
        int i=1;
        stack<int> s;
        while(p)
        {
            if(i>=left && i<=right)
            {
                s.push(p->val);  
            }
            i++;
            p=p->next;
        }
        p=newhead;
        i=1;
        while(p)
        {
            if(i>=left && i<=right)
            {
                p->val=s.top(); 
                s.pop();   
            }
            i++;
            p=p->next;
        }
        return newhead;
    }
};