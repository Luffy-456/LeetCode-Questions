1//without using lower & upper bound concept
2class Solution {
3private:
4    int firstidx(vector<int>& a, int ele) {
5        int l=0,h=a.size()-1,first=-1;
6        while(l<=h){
7            int m=l+((h-l)/2);
8            if(a[m]==ele){
9                first=m;
10                h=m-1;
11            }
12            else if(a[m]<ele){
13                l=m+1;
14            }
15            else{
16                h=m-1;
17            }
18            
19        }
20        return first;
21    }
22    int lastidx(vector<int>& a, int ele) {
23        int l=0,h=a.size()-1,last=-1;
24        while(l<=h){
25            int m=l+((h-l)/2);
26            if(a[m]==ele){
27                last=m;
28                l=m+1;
29            }
30            else if(a[m]<ele){
31                l=m+1;
32            }
33            else{
34                h=m-1;
35            }
36        }
37        return last;
38    }
39public:
40    vector<int> searchRange(vector<int>& nums, int target) {
41        int first=firstidx(nums,target);
42        if(first==-1) return {-1,-1};
43        else return{first,lastidx(nums,target)};
44    }
45};
46
47
48
49
50//using lower & upper bound concept
51// class Solution {
52// private:
53//     int lowerbound(vector<int>& a, int ele){
54//         int l=0,h=a.size()-1,ans=a.size();
55//         while(l<=h){
56//             int m=l+((h-l)/2);
57//             if(a[m]>=ele){
58//                 ans=m;
59//                 h=m-1;
60//             }
61//             else{
62//                 l=m+1;
63//             }
64//         }
65//         return ans;
66//     }
67//     int upperbound(vector<int>& a, int ele){
68//         int l=0,h=a.size()-1,ans=a.size();
69//         while(l<=h){
70//             int m=l+((h-l)/2);
71//             if(a[m]>ele){
72//                 ans=m;
73//                 h=m-1;
74//             }
75//             else{
76//                 l=m+1;
77//             }
78//         }
79//         return ans;
80//     }
81// public:
82//     vector<int> searchRange(vector<int>& nums, int target) {
83//         int lb=lowerbound(nums,target);
84//         if(lb>=nums.size()||nums[lb]!=target) return {-1,-1};
85//         else return {lb,upperbound(nums,target)-1};
86//     }
87// };
88// if(lb>=nums.size()||nums[lb]!=target) return {-1,-1};
89// here if my lb>=n then the number doesn't exists in the array