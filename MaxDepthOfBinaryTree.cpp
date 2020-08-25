class Solution
{
    public:
    int maxDepth(TreeNode* root)
    {
        int ret = -1;
        if(root)
		    ret = max(maxDepth(root->left), maxDepth(root->right));
        return ret + 1;
    }
};
