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
    int getDecimalValue(ListNode* head) {
        int sum = 0;
        ListNode *t = head;
        while(t != NULL)
        {
            sum = sum << 1;
            sum += t->val;
            t = t->next;
        }
        return sum;
    }
};
