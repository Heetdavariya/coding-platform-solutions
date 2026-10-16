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
    ListNode* reverseList(ListNode* head){
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while(curr!=nullptr){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    ListNode* doubleIt(ListNode* head) {
        int carry = 0;
        ListNode* temp = reverseList(head);
        ListNode* head1 = nullptr;
        ListNode* last = nullptr;
        while (temp != nullptr) {
            ListNode* newNode = new ListNode();
            int num = carry + (temp->val * 2);
            if (num < 10) {
                newNode->val = num;
                carry = num / 10;
            } else {
                newNode->val = num % 10;
                carry = num / 10;
            }
            if (head1 == nullptr) {
                head1 = newNode;
                last = newNode;
            } else {
                last->next = newNode;
                last = newNode;
            }
            temp = temp->next;
        }
        if (carry > 0) {
            ListNode* newNode = new ListNode(carry);
            last->next = newNode;
            last = newNode;
        }
        return reverseList(head1);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna