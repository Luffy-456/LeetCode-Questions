1class Solution {
2public:
3    bool isPalindrome(int x) {
4// using string 
5    //    string s=to_string(x);
6    //    int i=0;
7    //    while(s[i]!='\0')
8    //        {
9    //           if(s[i]!=s[s.size()-i-1])
10    //           {
11    //               return false;
12    //           }
13    //            i++;
14    //        }
15    //    return true;
16
17// without string 
18        long ori=x;
19        long rev=0;
20        if(x<0) return false;
21        while (x>0)
22            {   
23                int t=x%10;
24                rev = rev*10+t;
25                 x/=10;
26            }
27        
28
29        return ori==rev;
30    }
31};