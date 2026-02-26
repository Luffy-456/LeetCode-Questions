1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        int size=nums.size();
5        vector<int>ans;
6        for(int i=0;i<size;i++){
7            int t=target-nums[i];
8            for(int j=i+1;j<size;j++){
9                if(i!=j){
10                    if(t==nums[j]){
11                        ans.push_back(i);
12                        ans.push_back(j);
13                        break;
14                    }
15                }
16            }
17        }
18        return ans;
19    }
20};