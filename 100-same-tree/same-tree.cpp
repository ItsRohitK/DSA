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
 bool inorder(TreeNode*root,TreeNode*root2){
        if(root==NULL && root2==NULL)return true;
        else if(root!=NULL && root2!=NULL){
            if(root->val!=root2->val)return false;
           return inorder(root->left,root2->left)&&inorder(root->right,root2->right);
        }
        else{
            return false;
        }
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return inorder(p,q);
    }
};