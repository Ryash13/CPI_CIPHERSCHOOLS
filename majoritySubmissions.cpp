class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a;
        if(nums[0]==nums[nums.size()/2])
        {
            a = nums[0];
        }
        else if(nums[nums.size()/2]==nums[nums.size()-1])
        {
            a = nums[nums.size()-1];
        }
        else
            a = nums[nums.size()/2];
        
        return a;
    }
};
