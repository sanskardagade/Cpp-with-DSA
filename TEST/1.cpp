class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;
        ListNode* curr = head;

        while(curr) {

            // duplicate found
            if(curr->next && curr->val == curr->next->val) {

                int val = curr->val;

                // skip all same values
                while(curr && curr->val == val) {
                    curr = curr->next;
                }

                prev->next = curr; // connect
            }
            else {
                prev = curr;
                curr = curr->next;
            }
        }

        return dummy->next;
    }
};