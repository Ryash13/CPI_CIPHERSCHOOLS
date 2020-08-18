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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *curr = head;
        ListNode *prev = NULL;
        while(curr)
        {
            ListNode *nextNode = curr->next;
            if(curr->val != val)
                prev = curr;
            else
                prev ? prev->next = nextNode : head = nextNode, delete curr;
            
            curr = nextNode;
        }
        return head;
            
    }
};
