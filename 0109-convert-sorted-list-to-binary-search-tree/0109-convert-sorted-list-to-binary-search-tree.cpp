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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
TreeNode * solve(ListNode* &head, int cnt) {
        if(!cnt) return NULL;

        TreeNode * h = new TreeNode();
        h -> left = solve(head, (cnt-1)/2);
        h -> val = head -> val;
        head = head -> next;
        h -> right = solve(head, cnt/2);

        return h;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        // vector<int>v;
        int cnt = 0;
        ListNode * temp = head;
        while(head) cnt++,head=head->next;
        TreeNode * ans = solve(temp,cnt);
        return ans;
    }
};