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
 
 // using recursion
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        return func(head,NULL);
    }
    ListNode *func(ListNode *curr , ListNode *prev)
    {
        if(not curr)
            return prev;
        ListNode *post = curr->next;
        curr->next = prev;
        return func(post,curr);
    }
};
