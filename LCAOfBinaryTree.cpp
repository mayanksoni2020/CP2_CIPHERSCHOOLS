class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        if (root == NULL)
            return NULL;
        if (root == p || root == q)
            return root;
        TreeNode *lt = lowestCommonAncestor(root->left, p, q);
        TreeNode *rt = lowestCommonAncestor(root->right, p, q);
        if (lt && rt)
            return root;
        else if (lt)
            return lt;
        return rt;
    }
};
