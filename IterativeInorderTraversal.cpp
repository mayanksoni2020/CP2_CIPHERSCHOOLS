class Solution
{
    public:
    vector<int> inorderTraversal(TreeNode* root)
    {
        vector<int> result;
        inorder(root, result);
        return result;
    }
    void inorder(TreeNode* root, vector<int>& result)
    {
        if (!root)
            return;
        TreeNode* left = root->left;
        TreeNode* right = root->right;
        inorder(left, result);
        result.push_back(root->val);
        inorder(right, result);
  }
};
