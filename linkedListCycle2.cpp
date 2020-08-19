/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL)
            return NULL;
        if(head->next == NULL || head->next->next == NULL)
            return NULL;
        map<ListNode * , int> mp;
        ListNode *current = head;
        while(current)
        {
            if(mp.find(current) != mp.end())
                return current;
            mp[current] = 1;
            current = current->next;
        }
        return NULL;
    }
};
