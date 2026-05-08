1class Solution {
2public:
3    bool isIsomorphic(string s, string t) {
4        unordered_map<char, char> um1;
5        unordered_map<char, char> um2;
6        for (int i = 0; i < s.length(); i++) {
7            if (um1.find(s[i]) == um1.end() && um2.find(t[i]) == um2.end()) {
8                um1[s[i]] = t[i];
9                um2[t[i]] = s[i];
10            } else {
11                if (um1[s[i]] != t[i] ||
12                    um2[t[i]] != s[i]) {
13                    return false;
14                }
15            }
16        }
17        return true;
18    }
19};