class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int no_of_zeros = 0;
        for(int i=0;i+no_of_zeros<n;i++)
        {
            while(i+no_of_zeros < n && nums[i+no_of_zeros]==0)
            {
                no_of_zeros++;
            }
            if(i+no_of_zeros<n)
            {
                nums[i] = nums[i+no_of_zeros];
            }
        }
        for(int i=n-no_of_zeros;i<n;i++)
        {
            nums[i] = 0;
        }
    }
};
