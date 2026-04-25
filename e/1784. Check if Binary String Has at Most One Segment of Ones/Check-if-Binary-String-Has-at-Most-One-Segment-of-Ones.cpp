1class Solution {
2public:
3    bool checkOnesSegment(string s) {
4//optimal :
5    for(int i=0;i<s.length()-1;i++){
6        if(s[i]=='0' && s[i+1]=='1'){
7            return false;
8        }
9    }
10    return true;
11
12
13// brute force:
14
15    //     int t=0;
16    //     int i=0;
17    //     vector<int>a;
18    //     while(s[i]!='\0')
19    //     {
20    //         if(s[i]=='1'){
21    //             t++;
22    //         }
23    //         else
24    //         {
25    //             if(t!=0)
26    //             {
27    //                 a.push_back(t);
28    //             }
29    //             t=0;
30    //         }
31    //         if(i==s.length()-1)
32    //         {
33                
34    //             if(t!=0)
35    //             {
36    //                 cout<<endl<<"pushed t at \0 "<<endl;
37    //                 a.push_back(t);
38    //             }
39    //         }
40    //         i++;
41    //     }
42    //     if(a.size()==1){
43    //         return true;    
44    //     }
45    //     return false;
46
47    }
48};