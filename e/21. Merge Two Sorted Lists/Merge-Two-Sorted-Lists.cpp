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
13    ListNode* mergeTwoLists(ListNode* h1, ListNode* h2) {
14        ListNode*t=new ListNode(-1);
15        ListNode*tail=t;
16        while(h1!=NULL && h2!=NULL){
17            if(h1->val < h2->val){
18                tail->next=h1;
19                h1=h1->next;
20            }
21            else{
22                tail->next=h2;
23                h2=h2->next;
24            }
25            tail=tail->next;
26        }
27
28        //adding remaning nodes data
29        if(h1!=NULL) tail->next=h1;
30        else tail->next=h2;
31
32        return t->next; // returning after -1
33        
34        
35        
36        
37        
38        // using recursion
39        
40        // if (h1 == NULL || h2 == NULL) {
41        //     return h1 == NULL ? h2 : h1;
42        // }
43
44        // if (h1->val <= h2->val) {
45        //     h1->next = mergeTwoLists(h1->next, h2);
46        //     return h1;
47        // } else {
48        //     h2->next = mergeTwoLists(h2->next, h1);
49        //     return h2;
50        // }
51    }
52};