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
  int find(TreeNode*root,int& k){
        if(root==NULL){
            return -1;
        }
        int left=find(root->left,k);
        if(left!=-1){
            return left;
        }
        k--;           
        if(k==0)
            return root->val;
        return find(root->right,k);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        int ans=find(root,k);
        return ans;
        
    }
};