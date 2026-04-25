1class Solution {
2public:
3    vector<int> rearrangeArray(vector<int>& nums) {
4        int n=nums.size();
5        vector<int> ans(n);
6        int j=0,k=1;
7        for(int i=0;i<n;i++)
8        {
9            if(nums[i]>=0 && j<n)
10            {
11                ans[j]=nums[i];
12                j=j+2;
13            }
14            else{
15                if(k<n){
16                ans[k]=nums[i];
17                k=k+2;}
18            }
19        }
20        return ans;
21
22    }
23};