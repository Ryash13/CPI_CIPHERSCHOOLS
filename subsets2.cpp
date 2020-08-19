class Solution {
public:
    vector<vector<int>> build(vector<vector<int>> &ret, vector<int> &nums, int start)
    {
        if (start >= nums.size())
        {
            ret.push_back(vector<int>());                      
            return ret;
        }

        int cur = nums[start];
        int next = start;
        while (next<nums.size() && cur == nums[next]) 
            next++;  

        build(ret, nums, next);                                
        int size = ret.size();
        vector<vector<int>> rocknroll = ret;                   

        for (int i = 1; i <= next - start; i++)
        {
            for (int j = 0; j<size; j++) 
                rocknroll[j].insert(rocknroll[j].begin(), cur); 
            for (int j = 0; j<size; j++) 
                ret.push_back(rocknroll[j]); 
        }

        return ret;
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ret;
        sort(nums.begin(), nums.end());
        return build(ret, nums, 0);
    }
};
