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
13    ListNode* reverseList(ListNode* head) {
14        ListNode*c =head;
15        ListNode*p=NULL;
16        ListNode*n;
17        while (c!=NULL){
18            n=c->next;
19            c->next=p;
20            p=c;
21            c=n;
22        }
23        return p;
24    }
25};