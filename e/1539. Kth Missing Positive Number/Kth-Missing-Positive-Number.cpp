1class Solution {
2public:
3    int findKthPositive(vector<int>& arr, int k) {
4        int l=0,h=arr.size()-1;
5        while(l<=h){
6            int m=l+(h-l)/2;
7            int missing=arr[m]-(m+1);
8            if(missing <k){
9                l=m+1;
10            }
11            else{
12                h=m-1;
13            }
14        }
15        return k+h+1;
16    }
17};
18
19
20
21
22
23// brute force
24// class Solution {
25// public:
26//     int findKthPositive(vector<int>& arr, int k) {
27//         int n=arr.size();
28//         for (int i=0;i<n;i++){
29//             if(arr[i]<=k){
30//                 k++;
31//             }
32//             else{
33//                 break;
34//             }
35//         }
36//         return k;
37//     }
38// };