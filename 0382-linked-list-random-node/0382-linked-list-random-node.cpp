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
    int len=0;
    vector<int>ans;
public:
    Solution(ListNode* head) {
        
        while(head!=NULL){
            ans.push_back(head->val);
            head=head->next;
        }
        
    }
    
    int getRandom() {
        len=ans.size();
        int z=rand()%len;
        return ans[z];
    }
};

   
/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */