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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* head1 = nullptr;
        ListNode* temp = head;
        while(temp != nullptr){
            if(temp->val != val){
                ListNode* newNode = new ListNode(temp->val);
                if(head1 == nullptr){
                    head1 = newNode;
                }else{
                    ListNode* temp1 = head1;
                    while(temp1->next != nullptr){
                        temp1 = temp1->next;
                    }
                    temp1->next = newNode;
                }
            }
            temp=temp->next;
        }
        return head1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna