1//better approach O(n + m)
2class Solution{
3public:
4    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){
5        vector<int>res;
6        int i=0,j=0;
7        while(i<nums1.size() && j<nums2.size()){
8            if(nums1[i]<nums2[j]) res.push_back(nums1[i++]);
9            else res.push_back(nums2[j++]);
10        }
11        while(i<nums1.size()) res.push_back(nums1[i++]);
12        while(j<nums2.size()) res.push_back(nums2[j++]);
13
14        int l=0,h=res.size();
15        if(h%2!=0) return ((double)res[(l+(h-l)/2)]);
16        
17        int m=l+(h-l)/2;
18        return( ( ((double)res[m-1]+res[m])/2 ) );
19    }
20};
21
22
23
24
25
26// brute force O((n + m) log(n + m))
27// class Solution {
28// public:
29//     double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
30//         for(int i=0;i<nums2.size();i++){
31//             nums1.push_back(nums2[i]);
32//         }
33//         sort(nums1.begin(),nums1.end());
34//         int n1=nums1.size();
35//         if(n1%2!=0){
36//             return nums1[(0+(n1-0)/2)];
37//         }
38//             double m=0+(n1-0)/2;
39//             return ((double)(nums1[m-1]+nums1[m])/2);
40//     }
41// };