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
    ListNode* rotateRight(ListNode* head, int k) {
        int n = 0;
        ListNode *front = head;
        ListNode *back = NULL;
        if(!head)
            return 0;
        if(k==0)
            return head;
        while(head != NULL)
        {
            n++;
            back = head;
            head = head->next;
        }
        if(n==k||n==1||k%n==0)
            return front;
        head = front;
        int t = n;
        n = k%n;
        t = t- n;
        int m = 1;
        cout<<t<<" "<<n<<endl;
        t--;
        while(t--)
            head = head->next;
        ListNode *temp = head->next;
        head->next = NULL;
        back->next = front;
        front = temp;
        return front;
    }
};
