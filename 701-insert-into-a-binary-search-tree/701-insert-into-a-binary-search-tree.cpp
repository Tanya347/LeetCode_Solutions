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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        
        if(root == NULL) {
            TreeNode* newNode = new TreeNode(val);
            root = newNode;
            return root;
        }
        
        if(root -> val < val) {
            if(root -> right == NULL) {
                TreeNode* newNode = new TreeNode(val);
                root -> right = newNode;
            }
            else {
                insertIntoBST(root -> right, val);
            }
        }
        else {
            if(root -> left == NULL) {
                TreeNode* newNode = new TreeNode(val);
                root -> left = newNode;
            }
            else {
                insertIntoBST(root -> left, val);
            }
        }
        return root;
    }
};