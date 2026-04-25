1class Solution {
2public:
3    vector<int> shuffle(vector<int>& nums, int n) {
4        int size=nums.size();
5        vector<int>ans(size);
6        vector<int>v1(n);
7        vector<int>v2(n);
8        for (int i=0;i<n;i++){
9            v1[i]=nums[i];
10        }
11        for (int i=0;i<n;i++){
12            v2[i]=nums[i+n];
13        }
14        for(int i=0;i<n;i++){
15            ans[2*i]=v1[i];
16            ans[2*i+1]=v2[i];
17        }
18return ans;
19    }
20};