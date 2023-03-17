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
  TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return build(inorder, 0, inorder.size()-1, postorder, 0, postorder.size()-1);
    }
    TreeNode* build(vector<int>& in, int l1, int r1, vector<int>& post, int l2, int r2){
        if(l1>r1)return nullptr;
        int idx = l1;
        while(in[idx] != post[r2])idx++;
        return new TreeNode(post[r2], build(in, l1, idx-1, post, l2, l2+idx-l1-1),
                                 build(in, idx+1, r1, post, l2+idx-l1, r2-1));
    }
        
};