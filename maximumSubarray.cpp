class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int sumMax = INT_MIN;
        for(int i:nums)
        {
            sum = sum + i;
            sumMax = max(sumMax,sum);
            if(sum < 0)
                sum = 0;
        }
        return sumMax;
    }
};
