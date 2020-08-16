class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int m = *max_element(candies.begin(),candies.end());
        vector<bool> v;
        for(int i=0;i<candies.size();i++)
        {
            if((candies[i]+extraCandies) >= m) v.push_back(true);
            else v.push_back(false);
        }
        
        return v;
    }
};
