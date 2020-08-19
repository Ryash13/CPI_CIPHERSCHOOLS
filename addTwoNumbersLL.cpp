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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *res = NULL;
        ListNode *temp;
        ListNode *next;
        int carry = 0 , sum = 0;
        while(l1 || l2)
        {
            sum = carry + (l1?l1->val:0)+(l2?l2->val:0);
            carry = (sum>=10)?1:0;
            sum = sum%10;
            temp = new ListNode(sum);
            if(!res)
                res = temp;
            else
                next->next = temp;
            next = temp;
            
            if(l1)
                l1 = l1->next;
            if(l2)
                l2 = l2->next;
        }
        if(carry>0)
            temp ->next = new ListNode(carry);
        return res;
    }
};
