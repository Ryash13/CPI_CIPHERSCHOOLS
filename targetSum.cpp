class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        if(nums.empty())
            return 0;
        int s = nums.size();
        unordered_map<int,int> dp , next;
        dp[nums[0]]++;
        dp[-nums[0]]++;
        for(int i=1;i<s;i++)
        {
            next.clear();
            for(auto a: dp)
            {
                next[a.first + nums[i]] += dp[a.first];
                next[a.first - nums[i]] += dp[a.first];
            }
            dp = next;
        }
        return dp[S];
    }
};
