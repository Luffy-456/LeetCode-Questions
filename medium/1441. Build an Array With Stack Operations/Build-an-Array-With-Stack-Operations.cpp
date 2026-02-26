1class Solution {
2public:
3    vector<string> buildArray(vector<int>& target, int n) {
4        vector<string>ans;
5        int j=0;
6        for(int i=0;i<n;i++){
7            int c=i+1;
8            if(j<target.size()){
9
10                if (c==target[j]){
11                    ans.push_back("Push");
12                    j++;
13                }
14                else{
15                    ans.push_back("Push");
16                    ans.push_back("Pop");
17                }
18            }
19        }
20        return ans;
21    }
22};