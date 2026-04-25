1class Solution {
2public:
3    vector<int> spiralOrder(vector<vector<int>>& matrix) {
4        vector<int>ans;
5        int row=matrix.size();//3
6        int col=matrix[0].size();//3
7                //2         2                  
8        int t=0,b=row-1,l=0,r=col-1;
9        while(t<=b && l<=r){
10
11            // 00 01 02
12            for(int i=t;i<=r;i++){
13                ans.push_back(matrix[t][i]);
14            }
15            t++;
16
17            // 12 22
18            for(int i=t;i<=b;i++){
19                ans.push_back(matrix[i][r]);
20            }
21            r--;
22
23            //21 20
24            if(t<=b){
25                for(int i=r;i>=l;i--){
26                ans.push_back(matrix[b][i]);
27                }
28                b--;
29            }
30
31            //20 10
32            if(l<=r){
33                for(int i=b;i>=t;i--){
34                ans.push_back(matrix[i][l]);
35                }
36                l++;
37            }
38        }
39    return ans;
40    }
41};