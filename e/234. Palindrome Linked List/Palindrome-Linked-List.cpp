1class Solution {
2public:
3    bool isPalindrome(ListNode* head) {
4        ListNode *f=head; 
5        ListNode*s=head;
6        //finding middle s is middle
7        while(f!=NULL && f->next!=NULL)
8        {
9            s=s->next;
10            f=f->next->next;
11        }
12        //reverse from s
13        ListNode *p=NULL;
14        ListNode *c=s;
15        ListNode *n;
16        while(c!=NULL){
17            n=c->next;
18            c->next=p;
19            p=c;
20            c=n;
21        }
22        //attach reversed list
23        s=p;
24        ListNode *t=head;
25        while(s!=NULL)
26        {
27            if(t->val!=s->val) return false;
28                t=t->next;s=s->next;
29        }
30        return true;
31    }
32};