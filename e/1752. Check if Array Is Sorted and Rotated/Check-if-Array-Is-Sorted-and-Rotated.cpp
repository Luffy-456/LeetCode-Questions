1class Solution {
2public:
3    bool check(vector<int>& nums) {
4        int c=0;int size=nums.size();
5        for(int i=1;i<size;i++){
6            if(nums[i-1]>nums[i]){
7                c++;
8            }
9        }
10        if(nums[size-1]>nums[0]) c++;
11        
12        return c <= 1;
13    }
14};