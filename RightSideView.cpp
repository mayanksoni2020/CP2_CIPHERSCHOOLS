class Solution
{
    public:
    vector<int> rightSideView(TreeNode* root)
    {
        vector<int> ans;
        if(!root)
            return ans;
        queue<TreeNode* > q;
        q.push(root);
        while(!q.empty())
        {
            int n = q.size();
            int lastVal = INT_MAX;
            for( int i = 0; i < n; i++ )
            {
                TreeNode* temp = q.front();
                q.pop();
                lastVal = temp->val;
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            ans.push_back(lastVal);
        }
        return ans;
    }
};
