1class Solution {
2public:
3    string largestOddNumber(string s) {
4    int n=s.length();
5        if(s.back()%2==1){
6            return s;
7        }
8        for (int i=n-1;i>=0;i--)
9            {
10                if(s[i]%2==1)
11                {
12                    return s.substr(0,i+1);
13                }
14            }
15        return "";
16    }
17};