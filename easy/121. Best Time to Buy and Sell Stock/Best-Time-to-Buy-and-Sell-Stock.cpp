1//optimal
2class Solution {
3public:
4    int maxProfit(vector<int>& a) {
5        int ans=0,mini=INT_MAX;
6        for(int i=0;i<a.size();i++){
7            mini=min(mini,a[i]);
8                int profit=a[i]-mini;
9                ans=max(ans,profit);
10        }
11        return ans;
12    }
13};
14//brute force
15// class Solution {
16// public:
17//     int maxProfit(vector<int>& a) {
18//         int ans=0;
19//         for(int i=0;i<a.size();i++){
20//             for(int j=i+1;j<a.size();j++){
21//                 int profit=a[j]-a[i];
22//                 ans=max(ans,profit);
23//             }
24//         }
25//         return ans;
26//     }
27// };
28