class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        auto &h = heights;
        int answer = 0;
        h.push_back(-1);
        stack<pair<int , int>> stk;
        for(int i=0;i<h.size();i++)
        {
            while(stk.size() && stk.top().first > h[i])
            {
                int prevHeight = stk.top().first;
                stk.pop();
                int prevIndex = 0;
                if(stk.size())
                {
                    prevIndex = stk.top().second + 1;
                }
                answer = max(prevHeight*(i-prevIndex) , answer);
            }
            stk.push({h[i],i});
        }
        h.pop_back();
        return answer;
    }
};
