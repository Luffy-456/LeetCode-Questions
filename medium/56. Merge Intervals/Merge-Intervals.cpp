1class Solution {
2public:
3    vector<vector<int>> merge(vector<vector<int>>& nums) {
4        int n= nums.size();
5        vector<vector<int>> ans;
6        sort(nums.begin(),nums.end());
7        for(int i=0;i<n;i++){
8// current ele > last added interval last ele
9            if(ans.empty() || nums[i][0]>ans.back()[1]){
10                ans.push_back(nums[i]);
11            }
12            else{
13                ans.back()[1]=max(ans.back()[1],nums[i][1]);
14            }
15        }
16        return ans;
17    }
18};
19
20// brute force with tc O(n^2)
21// class Solution {
22// public:
23//     vector<vector<int>> merge(vector<vector<int>>& nums) {
24//         int n= nums.size();
25//         vector<vector<int>> ans;
26//         sort(nums.begin(),nums.end());
27//         for(int i=0;i<n;i++){
28//             int s=nums.[i][0];
29//             int e=nums.[i][1];
30//             if(!ans.empty() && e<=ans.back()[1]){
31//                 continue;
32//             }
33//             for(int j=i+1;j<n;j++){
34//                 if(ans[j][0]<=e){
35//                     e=max(e,ans[j][1]);
36//                 }
37//                 else{
38//                     break;
39//                 }
40//             }
41//             ans.push_back({s,e});
42//         }
43//         return ans;
44//     }
45// };