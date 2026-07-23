/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp = node->next;     // store next node
        node->val = temp->val;           // copy data
        node->next = temp->next;         // bypass next node
        delete temp;
    }
};