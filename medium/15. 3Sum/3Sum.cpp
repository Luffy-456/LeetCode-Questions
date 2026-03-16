1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        int n=nums.size();
5        sort(nums.begin(),nums.end());
6        vector<vector<int>> ans;
7        for(int i=0;i<n;i++){
8            if(i>0 && nums[i]==nums[i-1]) continue;
9            int j=i+1;
10            int k= n-1;
11
12            while(j<k){
13                int s= nums[i]+nums[j]+nums[k];
14                if(s<0){
15                    j++;
16                }
17                else if(s>0){
18                    k--;
19                }
20                else{
21                    vector<int>t={nums[i],nums[j],nums[k]};
22                    ans.push_back(t);
23                    j++;
24                    k--;
25                    while(j<k && nums[j]==nums[j-1]) j++;
26                    while(j<k && nums[k]==nums[k+1]) k--;
27                }
28            }
29        }
30        return ans;
31    }
32};
33
34// optimal above here i used the 2 ptr where i first sorted the arr so that i don't have to use another sort them and store the unique only now all i have to do is maintain i!=j,j!=k,i!=k so i fixed i then j start from i+1 and k from the end now i will add all the elemets if is ans is not 0 then i will move j++ and k-- and if they cross the paths or j==k i will stop and do the i++ and since its in the sorted so i will just skip the all the same i,j,k ele when iterating 
35
36
37// brute force approach O(n^3)
38// class Solution {
39// public:
40//     vector<vector<int>> threeSum(vector<int>& nums) {
41//         int n=nums.size();
42//         set<vector<int>> s;
43//         for(int i=0;i<n;i++){
44//             for(int j=i+1;j<n;j++){
45//                 for(int k=j+1;k<n;k++){
46//                     if((nums[i]+nums[j]+nums[k])==0){
47//                         vector<int>t={nums[i],nums[j],nums[k]};
48//                         sort(t.begin(),t.end());
49//                         s.insert(t);
50//                     }
51//                 }
52//             }
53//         }
54//         vector <vector<int>> ans={s.begin(),s.end()};
55//         return ans;
56//     }
57// };
58
59// better O(n^2) using 2 hashmap mid_value contains the value between i & j find k in that and if found i got my vector
60// class Solution {
61// public:
62//     vector<vector<int>> threeSum(vector<int>& nums) {
63//         int n=nums.size();
64//         set<vector<int>>s;
65//         for(int i=0;i<n;i++){
66//             set<int>mid_value;
67//             for(int j=i+1;j<n;j++){
68//                 int k=-(nums[i]+nums[j]);
69//                 if(mid_value.find(k)!=mid_value.end()){
70//                     vector<int>t={nums[i],nums[j],k};
71//                     sort(t.begin(),t.end());
72//                     s.insert(t);
73//                 }
74//                 mid_value.insert(nums[j]);
75//             }
76//         }
77//         vector<vector<int>>a={s.begin(),s.end()};
78//         return a;
79//     }
80// };