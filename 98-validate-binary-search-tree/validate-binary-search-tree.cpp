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
    vector<int>vec;
    void inorder(TreeNode*root){
        if(root==NULL)return;
        else{
            inorder(root->left);
            vec.emplace_back(root->val);
            inorder(root->right);
        }
    }

    bool isValidBST(TreeNode* root) {
        inorder(root);
        set<int>st;
        for(auto it:vec){
            st.insert(it);
        }
         
         if(st.size()!=vec.size())return false;
         int i=0;
         auto it=st.begin();
         while(i<st.size()){
            if(*it!=vec[i])return false;
            it++;
            i++;
         }
         return true;
    }
};