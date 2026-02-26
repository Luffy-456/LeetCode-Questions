1class Solution {
2public:
3    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
4        int size=nums.size();
5        vector<int>ans;int c=0;
6        for (int i=0;i<size;i++){
7            c=0;
8            for(int j=0;j<size;j++){
9                if(nums[i]>nums[j]){
10                    c++;
11                }
12                else if(nums[i]==nums[j]){
13                    continue;
14                }
15            }
16            ans.push_back(c);
17        }
18        return ans;
19    }
20};