class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        
        bool non_inc = true;
        bool non_dec = true;
        
        for(int i=1;i<A.size();i++)
        {
            if(A[i]<A[i-1])
            {
                non_inc = false;
            }
        
            if(A[i]>A[i-1])
            {
                non_dec = false;
            }
        }
        
        return non_inc || non_dec;
        
    }
};
