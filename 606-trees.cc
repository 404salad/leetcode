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
    string str = "";
    void preorder(TreeNode* root){
        str+= to_string(root->val);
        if(root->left) {
            str+= '(';
            preorder(root->left);
            str+= ')';
        } 
        if(root->right && root->left) {
            str+= '(';
            preorder(root->right);
            str+= ')';
        }
        else if(root->right && !root->left){
            str += "()";
            str+= '(';
            preorder(root->right);
            str+= ')';
        }
        return;
    }
    string tree2str(TreeNode* root) {
        preorder(root);
        return str;//regex_replace(str,regex("\\(\\)"),"");
       
    }
};
