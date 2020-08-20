class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>m;
        string fin;
        
        if(s==t)return s;
        if(s.size()<t.size())return "";
        
        for(auto i:t)m[i]--;
        
        int cnt=0,st=0,len=INT_MAX;
        
        for(int i=0;i<s.size();i++){
           
            if(m.find(s[i])!=m.end())
            {
                if(m[s[i]]<0)cnt++;
                m[s[i]]++;
            }
            
            while(st<s.size()&&cnt==t.size()){
                
                if(len>i-st+1){
                    len=i-st+1;
                    fin=s.substr(st,len);
                }
                
              if(m.find(s[st])!=m.end())
              {
                  m[s[st]]--;
                  if(m[s[st]]<0)
                    cnt--;
              }
              st++;
            }
        }
       
        return fin;
    }
};
