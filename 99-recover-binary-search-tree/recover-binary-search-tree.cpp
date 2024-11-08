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
    vector<TreeNode*>pointers;
    vector<int>values;
     void inorder(TreeNode*root){
        if(root==NULL)return;
        else{
            inorder(root->left);
            values.emplace_back(root->val);
            pointers.emplace_back(root);
            inorder(root->right);
        }
    }
    
    void recoverTree(TreeNode* root) {
        inorder(root);
        vector<int>temp=values;
        sort(temp.begin(),temp.end());
        int index1,index2,check=0,count=0;
        for(int i=0;i<temp.size();i++){
            if(values[i]!=temp[i]){
                if(check==0){
                    index1=i;
                    check=1;
                    
                }
                else{
                    index2=i;
                }
                count++;
                if(count==2)break;
            }
        }
        int tempval=pointers[index1]->val;
        pointers[index1]->val=pointers[index2]->val;
        pointers[index2]->val=tempval;


    }
};