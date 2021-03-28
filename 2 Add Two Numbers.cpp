class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* sum = new ListNode(0); // dummy head
        ListNode* cur = sum;
        int carry = 0;
        int tmp;
        while (l1 && l2)
        {
            tmp = l1->val + l2->val + carry;
            cur->next = new ListNode(tmp % 10);
            carry = (tmp >= 10);
            cur = cur->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while (l1)
        {
            tmp = l1->val + carry;
            cur->next = new ListNode(tmp % 10);
            carry = (tmp >= 10);
            cur = cur->next;
            l1 = l1->next;
        }
        while (l2)
        {
            tmp = l2->val + carry;
            cur->next = new ListNode(tmp % 10);
            carry = (tmp >= 10);
            cur = cur->next;
            l2 = l2->next;
        }
        if (carry) // last carry
        {
            cur->next = new ListNode(carry);
        }
        return sum->next; // skip dummy head
    }
};