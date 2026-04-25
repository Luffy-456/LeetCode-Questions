1class Solution {
2public:
3    bool checkZeroOnes(string s) {
4        int o=0,z=0,t0=0,t1=0;
5        bool maxi=false;
6        // for(int i=0;i<s.size();i++){
7        //     if(s[i]=='0'){
8        //         z++;
9        //     }
10        //     else{
11        //         o++;
12        //         if(o>z){
13        //             maxi=true;
14        //         }
15        //         else{
16        //             maxi=false;
17        //         }
18        //         z=0;
19        //     }
20        // }
21        // if(o==z)
22        // {
23        //     maxi=false;
24        // }
25
26            for(int i=0;i<s.size();i++){
27        
28                if(s[i]=='0'){
29                    t0++;
30                    z=max(z,t0);
31                    t1=0;
32                }
33                else{
34                    t1++;
35                    o=max(o,t1);
36                    t0=0;
37                    
38                }
39            }
40       //     for(int i=0;i<s.size();i++){
41                
42     //           if(s[i]=='1'){
43     //               t1++;
44     //               o=max(o,t);
45     //           }
46     //           else{
47     //               t=0;
48                    
49      //          }
50     //       }
51            if(o>z){
52                maxi=true;
53            }
54            else if(o==z)
55            {
56                maxi=false;
57            }
58            else{
59                maxi=false;
60            }
61        return maxi;
62    }
63};