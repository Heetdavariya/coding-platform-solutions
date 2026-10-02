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
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* curr = head;
        ListNode* l = dummy;

        for(int i=1;i<left;i++){
            l=l->next;
            curr=curr->next;
        }

        ListNode* subListHead = curr;
        ListNode* prev = nullptr;

        for(int i=1;i<=right-left+1;i++){
            ListNode* front = curr->next;
            curr->next=prev;
            prev=curr;
            curr=front;
        }

        l->next = prev;
        subListHead->next=curr;

        return dummy->next;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna