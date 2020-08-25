class Solution
{
    public:
    bool solver(TreeNode* left, TreeNode* right)
    {
        if(!left&&!right)
            return true;
        if((left && !right)||(!left&& right))
            return false;
        if(left->val!=right->val)
            return false;
        return solver(left->left, right->right) && solver(left->right, right->left);
    }
    bool isSymmetric(TreeNode* root)
    {
        return solver(root, root);
    }
};
