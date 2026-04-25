1class Solution {
2public:
3    vector<int> findErrorNums(vector<int>& nums) {
4        int size=nums.size();
5        vector<int>f(size+1,0);
6        vector<int>ans(2);
7        if(size!=0){
8            for(auto x:nums){
9                f[x]++;
10            }
11            for (int i=1;i<=size;i++){
12                if(f[i]==2){
13                    ans[0]=i;
14                }
15                else if(f[i]==0){
16                    ans[1]=i;
17                }
18            }
19        }
20        return ans;
21    }
22};