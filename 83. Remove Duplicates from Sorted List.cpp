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
        if(head == NULL)
        {
            return head;
        }
        ListNode* ans = head;
        ListNode* nextNode = head;
        nextNode = nextNode->next;
        while(nextNode != NULL)
        {
            if(head->val == nextNode->val)
            {
                nextNode = nextNode->next;
                if(nextNode == NULL)
                {
                    head->next = nextNode;
                    break;
                }
            }
            else {
                head->next = nextNode;
                head = head->next;
                nextNode = nextNode->next;
            }
        }
        return ans;
    }
};