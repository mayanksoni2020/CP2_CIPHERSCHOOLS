class Solution
{
    public:
    void flatten(TreeNode* root)
    {
        flatten1(root);   
    }
    TreeNode* flatten1(TreeNode* root)
    {
        if (root == NULL)
            return NULL;
        root->right = flatten1(root->right);
        root->left = flatten1(root->left);        
        TreeNode* temp = root->right;        
        root->right = root->left;
        root->left = NULL;
        TreeNode *temp2 = root;
        while(temp2 && temp2->right)
            temp2 = temp2->right;
        if (temp2)
        {
            temp2->right = temp;
            temp2->left = NULL;
        }
        return root;
    }
};
