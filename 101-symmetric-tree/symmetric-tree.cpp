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
    vector<TreeNode*>preord;
    vector<TreeNode*>postord;
    void preorder(TreeNode*root){
        if(root==NULL){
            preord.emplace_back(root);
            return;
        }
        else{
            preord.emplace_back(root);
            preorder(root->left);
            
            preorder(root->right);
        }
    }
    void postorder(TreeNode*root){
        if(root==NULL){
            postord.emplace_back(root);
            return;
        }
        else{
            
            postorder(root->left);
            
            postorder(root->right);
            postord.emplace_back(root);
        }
    }
    bool isSymmetric(TreeNode* root) {
       preorder(root);
       postorder(root);
       
       reverse(preord.begin(),preord.end());
       for(int i=0;i<preord.size();i++){
        if((preord[i]==NULL && postord[i]==NULL))continue;
        else if((preord[i]==NULL && postord[i]!=NULL)||(preord[i]!=NULL && postord[i]==NULL))return false;
        else if(((preord[i]->val!=postord[i]->val))){
            return false;
        }
       }
       return true;
    }
};