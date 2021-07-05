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
    bool hasCycle(ListNode *head) {
        if(head == NULL)
        {
            return false;
        }
        ListNode *first = head;
        ListNode *second = head;
        
        while(first != NULL && second != NULL)
        {
            //cout<<1<<endl;
            first = first->next;
            if(second->next == NULL) {
                return false;
            }
            second = second->next->next;
            if(first != NULL && first == second)
            {
                return true;
            }
        }
        return false;
    }
};