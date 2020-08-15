class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m.insert(make_pair(nums[i],i));
        }
        for(int j=0;j<nums.size();j++)
        {
            int num = target - nums[j];
            if(m.count(num) && m[num]!= j)
            {
                res = {j,m[num]};
            }
        }
        return res;
    }
};
