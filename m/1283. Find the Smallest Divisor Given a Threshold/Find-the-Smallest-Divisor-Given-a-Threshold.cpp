1class Solution{
2private:
3    bool finder(vector<int>& nums, int threshold,int m){
4        int sum=0;
5        for(int i=0;i<nums.size();i++){
6            //sum+=ceil((double)nums[i]/m); much faster below
7            sum+=(nums[i]+m-1)/m;
8        }
9        if(sum<=threshold){
10            return true;
11        }
12        return false;
13    }
14public:
15    int smallestDivisor(vector<int>& nums, int threshold){
16        int l=1,h=*max_element(nums.begin(),nums.end());
17        while(l<=h){
18            int m=l+(h-l)/2;
19            if(finder(nums,threshold,m)==true){
20                h=m-1;
21            }
22            else{
23                l=m+1;
24            }
25        }
26        return l;
27    }
28};
29// brute force
30// class Solution {
31// public:
32//     int smallestDivisor(vector<int>& nums, int threshold) {
33//         int n=nums.size();
34//         for(int i=1;i<=*max_element(nums.begin(),nums.end());i++){
35//             double sum=0;
36//             double thatNum=i;
37//             for(int j=0;j<n;j++){
38//                 sum+=ceil((double)nums[j]/thatNum);
39//             }
40//             if(sum<=threshold){
41//                 return thatNum;
42//             }
43//         }
44//         return -1;
45//     }
46// };