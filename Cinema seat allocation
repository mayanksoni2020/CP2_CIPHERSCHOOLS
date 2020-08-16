class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
    unordered_map<int,vector<int>> seats;
        
        int res = 2*n;
        
        for(auto s:reservedSeats)
        {
            seats[s[0]].push_back(s[1]);
        }
        
        for(auto row:seats)
        {
            bool l=false;
            bool r=false;
            bool m=false;
            
            for(auto s:row.second)
            {
                if(s>1 && s<6) l=true;
                if(s>5 && s<10) r=true;
                if(s>3 && s<8) m=true;
            }
            
            if(l==true) res--;
            if(r==true) res--;
            
            if(l==true && r==true && m==false) res++;
        }
        return res;
    }
};
