class Solution
{
    int tilt = 0;
    public:
    int findTilt(TreeNode* root)
    {
        if(root == NULL) return 0;
        solve(root);
        return tilt;
    }
    
    int solve(TreeNode* r)
    {
        if(r == NULL) return 0;
        int left = solve(r->left);
        int right = solve(r->right);
        tilt += abs(left-right);
        return r->val + left + right;
    }
};
