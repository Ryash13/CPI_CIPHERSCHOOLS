/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
private:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *P1 = l1;
        ListNode *P2 = l2;
        ListNode *result;
        if(P1 == NULL && P2 == NULL)
            return NULL;
        else if(P1 != NULL && P2 == NULL)
            return P1;
        else if(P1 == NULL && P2 != NULL)
            return P2;
        else
        {
            if(P1->val < P2->val)
            {
                result = P1;
                P1 = P1->next;
            }
            else
            {
                result = P2;
                P2 = P2->next;
            }
            
            ListNode *P = result;
            while(1)
            {
                if(P1 == NULL && P2 == NULL)
                    return result;
                else if(P1 != NULL && P2 == NULL)
                {
                    P->next = P1;
                    P1 = P1->next;
                    P = P->next;
                }
                else if(P1 == NULL && P2 != NULL)
                {
                    P->next = P2;
                    P2 = P2->next;
                    P = P->next;
                }
                else
                {
                    if(P1->val < P2->val)
                    {
                        P->next = P1;
                        P1 = P1->next;
                        P = P->next;
                    }
                    else
                    {
                        P->next = P2;
                        P2 = P2->next;
                        P = P->next;
                    }
                }
            }
        }
    }
   
   vector<ListNode*> mergeKListsHelper(vector<ListNode*> lists)
   {
       vector<ListNode*> result;
       int k = lists.size();
       if(k == 0)
            return result;
            
       int left = 0;
       int right = k-1;
       while(left < right)
       {
            result.push_back( mergeTwoLists(lists[left], lists[right]) ); 
            left++;
            right--;
       }
       if(left == right)
            result.push_back(lists[left]);
        return result;
   }
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int k = lists.size();
        if(k==0)
            return NULL;
        else if(k==1)
            return lists[0];
        
        vector<ListNode*> result = mergeKListsHelper(lists);
        k = (k+1)/2;
        while(k>1)
        {
            result = mergeKListsHelper(result);
            k = (k+1)/2;
        }
        return result[0];
    }
};
