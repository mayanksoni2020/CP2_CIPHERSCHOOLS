class Solution
{
    public:
    int Depth(TreeNode *root)
    {
        if(!root)
            return 0;
        return max(Depth(root->right),Depth(root->left))+1;
    }
    
    bool isBalanced(TreeNode* root)
    {
        if(!root)
            return true;
        if(abs(Depth(root->left)-Depth(root->right))>1)
            return false;
        else
            return (isBalanced(root->left)&isBalanced(root->right));
        
    }
};
