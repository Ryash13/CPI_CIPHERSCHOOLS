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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next)
            return head;
        ListNode *fhead = new ListNode(0) , *prev = fhead , *cur = head;
        fhead->next = head;
        while(cur && cur->next)
        {
            if(cur->val == cur->next->val)
            {
                ListNode *tmp = cur->next;
                while(tmp && tmp->val == cur->val)
                    tmp = tmp->next;
                prev->next = tmp;
                cur = tmp;
            }
            else
            {
                prev = cur;
                cur = cur->next;   
            }
        }
        return fhead->next;
    }
};
