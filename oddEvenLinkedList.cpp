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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL || head->next->next == NULL)
            return head;
        ListNode *current = head;
        ListNode *start = current->next;
        ListNode *end = current->next;
        while(end != NULL && end->next != NULL)
        {
            current->next = end->next;
            end->next = current->next->next;
            end = current->next->next;
            current->next->next = start;
            current = current->next;
        }
        return head;
    }
};
