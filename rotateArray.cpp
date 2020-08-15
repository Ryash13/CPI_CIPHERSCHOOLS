class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int nsize = nums.size();
            vector<int> temp = nums;
        for(int i=0;i<nsize;i++)
        {
            temp.at((i+k)%nsize)=nums.at(i);
        }
        nums = temp;
    }
};
