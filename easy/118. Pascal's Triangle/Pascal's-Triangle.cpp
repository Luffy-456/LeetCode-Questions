1class Solution {
2private:
3// this function will create a row and store in a then return it
4    vector<int> create(int r){
5        long long t=1;
6        vector<int>a;
7        a.push_back(1);
8            for(int i=1;i<r;i++){
9                t=t*(r-i);
10                t=t/(i);
11                a.push_back(t);
12            }
13            return a;
14        }
15public:
16    vector<vector<int>> generate(int numRows) {
17        vector<vector<int>> ans;
18// here it will create all row till it reaches numRows 
19        for(int i=1;i<=numRows;i++){
20            ans.push_back(create(i));
21        }
22    return ans;
23    }
24};