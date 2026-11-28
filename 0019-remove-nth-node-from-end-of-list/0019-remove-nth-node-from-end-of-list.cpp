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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int s=0;
        ListNode* temp = head;
        while(temp != nullptr){
            s+=1;
            temp=temp->next;
        }
        int del = s - n + 1;
        int t = 1;
        // cout << del ;
        if(s == 1) return nullptr;
        if(del == 1) return head->next;
        temp = head;
        while(temp != nullptr){
            // cout << del << " " << t << endl;
            if(t == del - 1 ){
                if(temp->next != nullptr){
                    temp->next = temp->next->next;
                    return head;
                }
            }
            t++;
            temp = temp->next;
        }

        // cout << s;
        return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna