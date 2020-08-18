class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int result = 0 , start = 0;
        unordered_map<char , int> umap;
        for(int i=0;i<s.size();i++)
        {
            if(umap.count(s[i]))
                start = max(start,umap[s[i]]+1);
            umap[s[i]] = i;
            result = max(result , i - start + 1);
        }
        return result;
    }
};
