1class Solution {
2public:
3    bool containsNearbyDuplicate(vector<int>& nums, int k) {
4        int a; // current ele
5        unordered_map<int, int> um;
6        for(int i=0;i<nums.size();i++){
7            a=nums[i];
8            if(um.count(a)){
9                if(i-um[a]<=k){
10                    return true;
11                }
12            }
13            um[a]=i;
14        }
15        return false;
16
17
18        
19        // int i = 0;
20        // unordered_map<int, int> um;
21        // while (i < nums.size()) {
22        //     if (!um.contains(nums[i])) {
23        //         um[nums[i]] = i;
24        //         i++;
25        //     } else {
26        //         if (abs(um.at(nums[i]) - i) <= k) {
27        //             return true;
28        //         } else {
29        //             um[nums[i]] = i;
30        //             i++;
31        //         }
32        //     }
33        // }
34        // return false;
35    }
36};