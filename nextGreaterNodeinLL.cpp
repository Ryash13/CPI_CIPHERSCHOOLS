/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        for(auto p=head;p != NULL;p=p->next)
            ans.push_back(p->val);
        stack<int> st;
        int n = ans.size();
        for(int i=n-1;i >= 0; i--)
        {
            int next = 0;
            while(!st.empty() && st.top() <= ans[i])
            {
                st.pop();
            }
            if(!st.empty() && st.top() > ans[i])
            {
                next = st.top();
            }
            st.push(ans[i]);
            ans[i] = next;
        }
        return ans;
    }
};
