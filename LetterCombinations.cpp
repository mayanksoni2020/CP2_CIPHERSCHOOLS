class Solution {
public:
    vector<string> letterCombinations(string digits) {
        
        if (digits.size()==0) return vector<string> ();
        unordered_map<int,string> m;
        m['2']="abc";
        m['3']="def";
        m['4']="ghi";
        m['5']="jkl";
        m['6']="mno";
        m['7']="pqrs";
        m['8']="tuv";
        m['9']="wxyz";
        
        deque<string> dq;
        dq.push_back("");
        
        for(char dg:digits)
        {
            for(int i=dq.size();i>0;i--)
            {
                string token = dq.front();
                dq.pop_front();
                
                for(char ch:m[dg])
                {
                    dq.push_back(token+ch);
                }
            }
        }
        
        return  vector<string>(dq.begin(),dq.end());
    
    }
};
