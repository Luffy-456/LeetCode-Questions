1//optimal
2class Solution {
3public:
4    int lengthOfLongestSubstring(string s) {
5        if(s.length()==0) return 0;
6        int n=s.length();
7        int i=0,j=i,c=0;
8        unordered_map<char,int>um;
9        while(j<n){
10            int t;
11            auto it=um.find(s[j]);
12            while(it!=um.end()){// if found, run until its present
13                it=um.find(s[j]); // need to recheck map might get empty
14                if(it!=um.end()){// if found
15                    um.erase(s[i]);// remove that
16                    i++;
17                }
18            }
19            c=max(c,(j-i+1));
20            um[s[j]]++;
21            j++;
22        }
23        return c;
24    }
25};
26
27//brute force
28// class Solution {
29// public:
30//     int lengthOfLongestSubstring(string s) {
31//         if(s.length()==0) return 0;
32//         int n=s.length();
33//         int i=0,c=0;
34//         while(i<n){
35//             unordered_map<char,int>um;
36//             int j=i;int t=0;
37//             while(j<n){
38//                 auto it=um.find(s[j]);
39//                 if(it == um.end()) {
40//                     um[s[j]]++;
41//                     t++;
42//                     j++;
43//                 }
44//                 else break;
45//             }
46//             c=max(t,c);
47//             i++;
48//         }
49//     return c;
50//     }
51// };
52