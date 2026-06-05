// Last updated: 6/5/2026, 12:16:38 PM
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        // Step 1: Find middle using slow/fast
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: Reverse second half
        ListNode* second = reverse(slow);

        // Step 3: Compare both halves
        ListNode* first = head;
        ListNode* temp = second;       // save to restore later
        bool result = true;
        while (second) {
            if (first->val != second->val) {
                result = false;
                break;
            }
            first = first->next;
            second = second->next;
        }

        return result;
    }

    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* temp = head;
        while (temp) {
            ListNode* next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }
        return prev;
    }
};