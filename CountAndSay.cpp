class Solution {
public:
    string countAndSay(int n) {
        string s="1";
        if(n==0) return "";
        
        while(--n)
        {
            string temp="";
            for(int j = 0;j<s.size();j++)
            {
                int count=1;    
                
                while((j+1)<s.size() && s[j+1]==s[j])
                {
                    count++;
                    j++;
                }
                
                temp +=to_string(count)+char(s[j]);
            }
              
                s=temp;
        }
        return s;
    }
};
