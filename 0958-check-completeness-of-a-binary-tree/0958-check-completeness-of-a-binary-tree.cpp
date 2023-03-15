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
    bool isCompleteTree(TreeNode* root) {
      if(!root) return true;
        queue<TreeNode*>q;
        q.push(root);
        bool flag=true;
        while(!q.empty()){
            int n=q.size();
            while(n--){
                auto p=q.front();
                q.pop();
                if(p->left==NULL && p->right!=NULL) return false;
                 else if((p->left!=NULL || p->right!=NULL) && flag==false ) return false;
                else if(p->left!=NULL && p->right==NULL){
                    flag=false;
                }
                else if(p->left==NULL && p->right==NULL) flag=false;
                if(p->left) q.push(p->left);
                if(p->right) q.push(p->right);
            }
        }
        return true;
    }
};