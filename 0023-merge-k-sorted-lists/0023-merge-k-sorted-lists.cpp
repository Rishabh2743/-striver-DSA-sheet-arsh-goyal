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
   void insert(ListNode* & head, ListNode* & tail, int ele)
    {
        ListNode* temp = new ListNode(ele);
        // base case;
        if(head == NULL)
        {
            head = temp;
            tail = temp; 
        }
        else
        {
            tail ->next = temp;
            tail = temp;
        }
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        // strt copy element to vector;
        vector<int> ans;
        for(int i=0; i< lists.size(); i++)
        {
            ListNode* temp = lists[i];
            while(temp)
            {
                ans.push_back(temp->val);
                temp = temp ->next;
            }
        }

        // sort the elemets;
        sort(ans.begin(), ans.end());

        //join the link ;
        ListNode* head = NULL;
        ListNode* tail = NULL;
        for(int i=0; i<ans.size(); i++)
        {
            insert(head, tail, ans[i]);
        }
        return head;
    }
};