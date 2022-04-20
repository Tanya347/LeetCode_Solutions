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
class BSTIterator {
public:
    vector<int> vals;
    int i;
    void inorder(TreeNode *root)
    {
        if(root==NULL) return;
        inorder(root->left);
        vals.push_back(root->val);
        inorder(root->right);
    }
    
    BSTIterator(TreeNode* root) {
        i = 0;
        inorder(root);
    }
    
    int next() {
        return vals[i++];
    }
    
    bool hasNext() {
        return vals.size()!=i;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */