// Last updated: 8/30/2026, 9:59:03 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* removeNthFromEnd(ListNode* head, int n) {
14        ListNode* temp=head;
15        int count=0;
16        while(temp){
17            count++;
18            temp=temp->next;
19        }
20        int k=count-n;
21        if(k==0)return head->next;
22        temp=head;
23        ListNode* prev= head;
24        while(k!=1){
25            prev = prev -> next;
26            k--;
27        }   
28        temp = prev->next;
29        prev-> next = temp-> next;
30
31        return head;
32    }
33};