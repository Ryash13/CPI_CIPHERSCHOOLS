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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int la = 0 , lb = 0;
        int diff , i;
        ListNode *tail = headA;
        ListNode *shorter;
        for(i=0;tail;i++)
        {
            tail = tail->next;
        }
        la = i;
        tail = headB;
        for(i=0;tail;i++)
            tail = tail->next;
        lb = i;
        if(la > lb)
        {
            tail = headA;
            diff = la - lb;
            shorter = headB;
        }
        else
        {
            tail = headB;
            diff = lb - la;
            shorter = headA;
        }
        for(int i = diff; i>0;i--)
            tail = tail->next;
        while(tail)
        {
            if(tail == shorter)
                return tail;
            else
            {
                tail = tail->next;
                shorter = shorter->next;
            }
        }
        return NULL;
    }
};
