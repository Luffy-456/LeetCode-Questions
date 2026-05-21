1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     /**
8 * Definition for singly-linked list.
9 * struct ListNode {
10 *     int val;
11 *     ListNode *next;
12 *     ListNode() : val(0), next(nullptr) {}
13 *     ListNode(int x) : val(x), next(nullptr) {}
14 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
15 * };
16 */
17//with recursion 
18class Solution {
19public:
20    ListNode* removeElements(ListNode* head, int val) {
21        if(head==NULL) return NULL;
22        
23        head->next=removeElements(head->next, val);
24        
25        if(head->val==val){
26            return head->next;
27        }
28        return head;
29    }
30};
31     
32 
33
34// without recursion 
35// class Solution {
36// public:
37    // ListNode* removeElements(ListNode* head, int val) {
38        // if (head == NULL)
39            // return head;
40        // ListNode* t = head;
41        // while (head != NULL && head->val == val) {
42            // head = head->next;
43            // t = head;
44        // }
45        // while (t != NULL && t->next != NULL) {
46            // if (t->next->val == val) {
47                // t->next = t->next->next;
48            // } else
49                // t = t->next;
50        // }
51        // return head;
52    // }
53// };
54