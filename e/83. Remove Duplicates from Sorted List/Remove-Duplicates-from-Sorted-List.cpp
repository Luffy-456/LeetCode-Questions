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
13    ListNode* deleteDuplicates(ListNode* head) {
14
15        ListNode* t = head;
16
17        while (t != NULL && t->next != NULL) {
18            if (t->val == t->next->val) {
19                t->next = t->next->next;
20
21            } else {
22                t = t->next;
23            }
24        }
25        return head;
26    }
27};