1class Solution {
2public:
3    string removeOuterParentheses(string s) {
4        int d=0;
5        string ans="";
6        for(int i=0;i<s.length();i++)
7        {
8            if(s[i]=='(')
9            {
10                d++;
11                if(d>1)
12                {
13                    ans+=s[i];
14                }
15            }
16            else if(s[i]==')')
17            {
18                d--;
19                if(d>0)
20                {
21                    ans+=s[i];
22                }
23            }
24             
25        }
26        return ans;
27    }
28};