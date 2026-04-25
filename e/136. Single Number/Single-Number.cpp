1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4        int size=nums.size();
5        int ans=0;
6        for(int i=0;i<size;i++){
7            ans=nums[i]^ans;
8        }
9        return ans;
10    }
11};