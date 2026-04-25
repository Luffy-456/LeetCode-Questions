1string find(vector<string>& strs, int size) {
2    string stock = strs[0];
3    int t;
4    if (size != 0) {
5        for (int i = 0; i < size; i++) {
6            t=0;
7            int ele_size = min(stock.length(),strs[i].length());
8            for (int j = 0; j < ele_size; j++) {
9                if (stock[j] == strs[i][j]) {
10                    t++;
11                } else 
12                {
13                    break;
14                }
15            }
16
17          
18             stock=stock.substr(0,t);
19            }
20          }
21    
22    return stock; }
23    
24
25
26class Solution {
27public:
28    string longestCommonPrefix(vector<string>& strs) {
29    int size = strs.size();
30    return find(strs, size);
31    }
32};