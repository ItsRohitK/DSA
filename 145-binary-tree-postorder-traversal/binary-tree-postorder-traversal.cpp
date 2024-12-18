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
    vector<int>postord;
 void postorder(TreeNode*root){
        if(root==NULL){
           return;
        }
        else{
            postorder(root->left);
            postorder(root->right);
            postord.emplace_back(root->val);
        }
    }
    vector<int> postorderTraversal(TreeNode* root) {
        postorder(root);
         return postord;
    }
};