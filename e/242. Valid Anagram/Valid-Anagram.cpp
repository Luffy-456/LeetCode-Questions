1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        if(s.length()!=t.length()) return false;
5        unordered_map<char,int>um;
6        for(auto i:s){
7            um[i]++;
8        }
9        // for(auto i:t){
10        //     if(um[i]==0){
11        //         return false;
12        //     }
13        //     um[i]--;
14        // }
15        // or
16        for(auto i:t){
17            if(--um[i]<0) return false;
18        }
19        return true;
20
21    }
22};