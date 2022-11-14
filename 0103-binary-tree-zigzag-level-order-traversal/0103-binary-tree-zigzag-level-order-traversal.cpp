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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL){
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
       int  level=0;
        
        while(!q.empty()){
            int n=q.size();
            vector<int>v;
                for(int i=0;i<n;i++){
                    TreeNode* cur= q.front();
                    q.pop();
                    v.push_back(cur->val);
                    if(cur->left!=NULL)q.push(cur->left);
                    if(cur->right!=NULL)q.push(cur->right);                 
                }
            level++;
            if(level%2!=0){
                ans.push_back(v);
            }else{
                reverse(v.begin(),v.end());
                ans.push_back(v);
            }
                
            }
        return ans;
        
    }
};