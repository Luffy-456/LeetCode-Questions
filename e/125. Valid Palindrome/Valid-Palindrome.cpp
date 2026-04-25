1//optimal
2class Solution {
3public:
4    bool isPalindrome(string s) {
5        if(s.empty()) return true;
6        int i=0,j=s.length()-1;
7        while(i<=j && i<s.length()){
8            if(!isalnum(s[i])) i++;
9            else if(!isalnum(s[j])) j--;
10            else{
11                if(tolower(s[i])!=tolower(s[j])) return false;
12                i++;j--;
13            }
14        }
15        return true;
16    }
17};
18//brute force
19// class Solution {
20// public:
21//     bool isPalindrome(string s) {
22//         if(s.empty()) return true;
23//         // to lower
24//         transform(s.begin(),s.end(),s.begin(),::tolower);
25
26//         // only keeping alphabets
27//         for(int i=0;i<s.length();){
28//             if(!(isalnum(s[i]))) {
29//                 s.erase(i,1);
30//             }
31//             else i++;
32//         }
33//         for(int i=0;i<s.length();i++){
34//             if(s[i]!=s[s.length()-i-1]) return false;
35//         }
36//         return true;
37//     }
38// };