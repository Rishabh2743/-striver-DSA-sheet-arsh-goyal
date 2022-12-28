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
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* curr = root;
        TreeNode* ans = new TreeNode();
        TreeNode* list = ans;
        stack<TreeNode*> s;
        while(curr or !s.empty()){
            if(curr){
                s.push(curr);
                curr = curr->left;
                continue;
            }
            TreeNode* t = s.top();
            s.pop();
            list->right = t;
            list = list->right;
            list->left = nullptr;
            if(t->right){
                curr = t->right;
            }
        }
        return ans->right;
        
    }
};