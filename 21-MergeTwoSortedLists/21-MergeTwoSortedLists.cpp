// Last updated: 6/5/2026, 12:18:03 PM
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* a=list1;
        ListNode* b=list2;
        ListNode* dummy=new ListNode(0);
        ListNode* tail=dummy;
        while(a&&b){
            if(a->val>b->val){
                tail->next=b;
                b=b->next;
            }
            else{
                tail->next=a;
                a=a->next;
            }
            tail=tail->next;
        }
        if(a)tail->next=a;
        else tail->next=b;
        return dummy->next;
    }
};