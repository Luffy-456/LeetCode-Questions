1class Solution {
2public:
3    void setZeroes(vector<vector<int>>& matrix) {
4        int n=matrix.size();
5        int col_n=matrix[0].size();
6        vector<int>row;
7        vector<int>col;
8        //scanning for zero idx
9        for(int i=0;i<n;i++){
10            for(int j=0;j<col_n;j++){
11                if(matrix[i][j]==0){
12                    row.push_back(i);
13                    col.push_back(j);
14                }
15            }
16        }
17
18
19        // set row ele to 0
20        for(int i=0;i<col_n;i++){
21            for(int j=0;j<row.size();j++){
22                matrix[row[j]][i]=0;
23            }
24        }
25
26        //set col ele to 0
27        for(int i=0;i<n;i++){
28            for(int j=0;j<col.size();j++){
29                matrix[i][col[j]]=0;
30            }
31        }
32    }
33};