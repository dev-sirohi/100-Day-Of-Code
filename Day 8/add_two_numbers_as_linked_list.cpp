class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* new_node = new ListNode();
        ListNode* temp = new_node;
        
        ListNode* trav1 = l1;
        ListNode* trav2 = l2;
        int carry = 0;
        
        while (trav1 || trav2 || carry) {
            int sum = 0;
            if (trav1) {
                sum += trav1->val;
                trav1 = trav1->next;
            }
            
            if (trav2) {
                sum += trav2->val;
                trav2 = trav2->next;
            }
            
            sum += carry;
            carry = sum / 10;
            temp->next = new ListNode(sum % 10);
            temp = temp->next;            
        }
        
        return new_node->next;
    }
};


/*


Let's just get one very stupid thing out of the way.
WE ALWAYS ADD NUMBERS IN REVERSE ORDER OF THEIR DIGITS.
When we add 102 and 456
we add them like
6 + 2
then 5 + 0
then 4 + 1

Now, the question says the digits are in reverse order
so, it'll be
6->5->4
+
2->0->1

THEY JUST MAKE OUR WORK EASIER, DO NOT BE CONFUSED BY THE REVERSAL LINE, JUST SOLVE IT NORMALLY.

*/
