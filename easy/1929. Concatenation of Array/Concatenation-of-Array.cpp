1class Solution {
2public:
3   vector<int> getConcatenation(vector<int>& nums) {
4        int size=nums.size();
5        vector<int> ans(2*size);
6        int as=ans.size();
7        for(int i=0;i<size;i++){
8            ans[i]=nums[i];
9        }
10        for(int i=0;i<size;i++){
11            ans[i+size]=nums[i];
12        }
13        return ans;
14    }
15};
16