1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    bool hasCycle(ListNode* head) {
12        ListNode* t = head;
13        ListNode* t1 = head;
14        while (t1 != NULL && t1->next != NULL) {
15            t = t->next;
16            t1 = t1->next->next;
17            if (t == t1) {
18                return true;
19            }
20        }
21        return false;
22    }
23};