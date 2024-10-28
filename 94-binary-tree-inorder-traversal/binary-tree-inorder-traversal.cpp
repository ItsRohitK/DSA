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
    vector<int>preord;
 void preorder(TreeNode*root){
        if(root==NULL){
            
            return;
        }
        else{
            preorder(root->left);
            preord.emplace_back(root->val);
            
            preorder(root->right);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
         preorder(root);
         return preord;
    }
};