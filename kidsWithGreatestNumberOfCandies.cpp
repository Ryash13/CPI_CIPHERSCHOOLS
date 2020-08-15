class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int num = candies.size();
        if(num==0)
            return {};
        vector<bool> res(num,false);
        int max_value = INT_MIN;
        for(int i=0;i<num;i++)
        {
            max_value = max(max_value,candies[i]);
        }
        for(int i=0;i<num;i++)
        {
            if(candies[i]+extraCandies >= max_value)
                res[i]= true;
        }
        return res;
    }
};
