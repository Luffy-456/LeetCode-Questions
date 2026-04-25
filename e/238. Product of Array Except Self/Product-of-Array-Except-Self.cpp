1//optimal O(1) space
2class Solution {
3public:
4    vector<int> productExceptSelf(vector<int>& nums) {
5        vector<int>ans(nums.size(),1);
6        for(int i=1;i<nums.size();i++){
7            ans[i]=ans[i-1]*nums[i-1];
8        }
9        int t=1;
10        for(int i=nums.size()-2;i>=0;i--){
11            t*=nums[i+1];
12            ans[i]=ans[i]*t;
13        }
14        return ans;
15    }
16};
17
18//better using custom prefix & suffix 
19// class Solution {
20// public:
21//     vector<int> productExceptSelf(vector<int>& nums) {
22//         vector<int>pre(nums.size()),suf(nums.size()),ans(nums.size());
23//         pre[0]=suf[nums.size()-1]=1;
24//         for(int i=1;i<nums.size();i++){
25//             pre[i]=pre[i-1]*nums[i-1];
26//         }
27//         for(int i=nums.size()-2;i>=0;i--){
28//             suf[i]=suf[i+1]*nums[i+1];
29//         }
30//         for(int i=0;i<nums.size();i++){
31//             ans[i]=pre[i]*suf[i];
32//         }
33        
34//         return ans;
35        
36//     }
37// };
38
39//brute force
40// class Solution {
41// public:
42//     vector<int> productExceptSelf(vector<int>& nums) {
43//         vector<int>ans(nums.size());
44//         for(int i=0;i<nums.size();i++){
45//             int s=1;
46//             for(int j=0;j<nums.size();j++){
47//                 if(i==j) continue;
48//                 s*=nums[j];
49//             }
50//             ans[i]=s;
51//         }
52//         return ans;
53//     }
54// };
55