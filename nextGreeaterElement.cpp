class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> answer;
        bool nf = true;
        for(int f:nums1)
        {
            vector<int> :: iterator itr = find(nums2.begin(),nums2.end(),f);
            for(;itr != nums2.end();itr++)
            {
                if(*itr > f)
                {
                    answer.push_back(*itr);
                    nf = false;
                    break;
                }
            }
            if(nf)
            {
                answer.push_back(-1);
            }
            nf = true;
        }
        return answer;
    }
};
