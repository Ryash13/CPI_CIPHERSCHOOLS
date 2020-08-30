class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==0)
            return 0;
        if(n==1)
            return nums[0];
        if(n==2)
            return max(nums[0],nums[1]);
        vector<int> func(n,0);
        func[0] = nums[0];
        func[1] = max(nums[0],nums[1]);
        for(int i = 2; i < n; i++)
        {
            func[i] = max(func[i-2] + nums[i] , func[i-1]);
        }
        return func[n-1];
    }
};
