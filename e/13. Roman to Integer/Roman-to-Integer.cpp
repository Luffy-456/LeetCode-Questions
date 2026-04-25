1class Solution {
2public:
3    int romanToInt(string s) {
4        unordered_map<char,int> um={
5            {'I',1},
6            {'V',5},
7            {'X',10}, 
8            {'L',50},
9            {'C',100},
10            {'D',500},
11            {'M',1000}
12        };
13        int sum=0;
14        for(int i=0;i<s.size();i++){
15            if(i+1<s.size() && um[s[i]] < um[s[i+1]]){
16                sum-=um[s[i]];
17            }
18            else{
19                sum+=um[s[i]];
20            }
21        }
22        return sum;
23    }
24};