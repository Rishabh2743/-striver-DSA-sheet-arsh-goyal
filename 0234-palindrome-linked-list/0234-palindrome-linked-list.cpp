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
    vector<int>v;
    bool check(int i){
        if(i>=v.size()/2){
            return true;
            
        }
        if(v[i]!=v[v.size()-1-i]){
            return false;
        }
        return check(i+1);
    }
    
    bool isPalindrome(ListNode* head) {
        while(head!=NULL){
            v.push_back(head->val);
            head=head->next;
        }
        return check(0);
       
        
    }
};