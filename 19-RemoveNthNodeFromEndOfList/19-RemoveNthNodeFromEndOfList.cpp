// Last updated: 6/5/2026, 12:18:06 PM
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
    // Helper function to reverse a linked list
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        while (head) {
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head) return nullptr;

        // 1. Reverse the list
        head = reverse(head);

        // 2. Remove nth node from start
        if (n == 1) {
            head = head->next;
        } else {
            ListNode* temp = head;
            for (int i = 1; i < n - 1 && temp; i++) {
                temp = temp->next;
            }
            if (temp && temp->next) {
                temp->next = temp->next->next;
            }
        }

        // 3. Reverse again
        head = reverse(head);

        return head;
    }
};
