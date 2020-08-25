class Solution
{
    public:
    int diaHelper(TreeNode* root, int& height)
    {
        if(!root)
        {
            height = 0;
            return 0;
        }
        int leftHeight = 0;
        int rightHeight = 0;
        int leftDia = diaHelper(root->left, leftHeight);
        int rightDia = diaHelper(root->right, rightHeight);
        height = max(leftHeight, rightHeight) + 1;
		return max(max(leftDia,rightDia), leftHeight + rightHeight);
    }
    
    int diameterOfBinaryTree(TreeNode* root)
    {
        int height = 0;
        return diaHelper(root, height);
    }
};
