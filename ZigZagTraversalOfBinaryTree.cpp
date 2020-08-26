class Solution
{
    public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root)
    {
        vector<vector<int>> res;
        if(root== NULL)
            return vector<vector<int>>();
        queue<TreeNode*> q;
        q.push(root);
        int f = false;
        while(q.size())
        {
            int size = q.size();
            vector<int> level;
            while(size--)
            {
                TreeNode* curr = q.front();
                level.push_back(curr->val);
                q.pop();
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
            }
            if(f)
                reverse(level.begin(),level.end());
            f=!f;
            res.push_back(level);
        }
        return res;
    }
};
