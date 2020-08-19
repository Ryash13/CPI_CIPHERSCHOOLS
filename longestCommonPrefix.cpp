class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) 
            return "";
        int minLen = INT_MAX;
        string ans = "";
        for(int i=0; i<strs.size(); i++)
            if(minLen > strs[i].size())
                minLen = strs[i].size();
        for(int i=0; i<minLen; i++) 
        {
            stack<char> s;
            for(int j=0; j<strs.size(); j++)
            {
                if(s.empty())
                    s.push(strs[j][i]);
                else if(s.top() == strs[j][i])
                    s.push(strs[j][i]);
            }
            if(s.size() == strs.size())
                ans.push_back(s.top());
            else 
                break;
        }
        return ans;
    }
};
