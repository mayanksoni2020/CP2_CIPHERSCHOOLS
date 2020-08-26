class Solution
{
    public:
    int maxSum(TreeNode* root,int& res)
    {
        if(!root)
            return 0;
        int maxl=maxSum(root->left,res);
        int maxr=maxSum(root->right,res);
        res=max(max(maxl+maxr+root->val,max(maxl+root->val,maxr+root->val)),res);
        return max(root->val,max(maxr+root->val,maxl+root->val));
    }
    
    int maxPathSum(TreeNode* root)
    {
        int res=INT_MIN;
        int sum=maxSum(root,res);
        return max(res,sum);
    }
};
