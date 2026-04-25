1class Solution {
2public:
3    bool isValid(string s) {
4        stack<char>st;
5        for(auto i:s){
6            if(i=='(' || i=='[' || i=='{' ) st.push(i);
7            else{
8                if(st.empty()) return false;
9// using ASCII values (= 40, )=41 ,[=91 ,]=93, {=123 ,}=125
10                else if(st.top()-i!=-1 && st.top()-i!=-2) return false;
11                else st.pop();
12            }
13        }
14        if(st.empty()) return true;
15        return false;
16    }
17};
18// better & brute force
19// class Solution {
20// public:
21//     bool isValid(string s) {
22//         stack<char> st;
23//         st.push(s[0]);
24//         for (int i = 1; i < s.length(); i++) {
25//             char t = s[i];
26//             if (!(st.empty()) && st.top() == '(' && t == ')')
27//                 st.pop();
28//             else if (!(st.empty()) && st.top() == '[' && t == ']')
29//                 st.pop();
30//             else if (!(st.empty()) && st.top() == '{' && t == '}')
31//                 st.pop();
32//             else
33//                 st.push(s[i]);
34//         }
35//         if (st.empty())
36//             return true;
37
38//         return false;
39//     }
40// };