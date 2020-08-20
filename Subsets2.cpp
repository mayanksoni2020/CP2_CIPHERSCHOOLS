class Solution {
public:
    void solve(vector<vector<int>>&res,vector<int>&s,vector<int> &A,int i)
{
    res.push_back(s);
    if(i==A.size())
            return ;
    int prev=A[i];
    for(int j=i;j<A.size();j++)
    {
        if(j==i||A[j]!=prev)
        {s.push_back(A[j]);
        solve(res,s,A,j+1);
        s.pop_back();
        prev=A[j];
        }
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       vector<vector<int>>res;
    vector<int>s;
    sort(nums.begin(),nums.end());
        solve(res,s,nums,0);
    return res; 
    }
};
