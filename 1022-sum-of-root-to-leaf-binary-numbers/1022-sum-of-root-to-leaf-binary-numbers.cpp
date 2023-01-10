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
    void sum_to_leaf(TreeNode *root , int &ans,string str)
    {
        if(root->left == NULL && root->right == NULL)
        {   
            str += to_string(root->val);
            ans += stoi(str , 0 , 2);
            return;
        }
        str += to_string(root->val);
        if(root->left != NULL)
        {
            sum_to_leaf(root->left , ans , str);   
        }
        if(root->right != NULL)
        {
            sum_to_leaf(root->right , ans , str);   
        }
    }

    int sumRootToLeaf(TreeNode* root) {
        int ans = 0;
        string str = "";
        sum_to_leaf(root , ans,str);
        return ans;
        
    }
};