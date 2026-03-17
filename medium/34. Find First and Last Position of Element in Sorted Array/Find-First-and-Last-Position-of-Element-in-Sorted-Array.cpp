1class Solution {
2private:
3    int lowerbound(vector<int>& a, int ele){
4        int l=0,h=a.size()-1,ans=a.size();
5        while(l<=h){
6            int m=l+((h-l)/2);
7            if(a[m]>=ele){
8                ans=m;
9                h=m-1;
10            }
11            else{
12                l=m+1;
13            }
14        }
15        return ans;
16    }
17    int upperbound(vector<int>& a, int ele){
18        int l=0,h=a.size()-1,ans=a.size();
19        while(l<=h){
20            int m=l+((h-l)/2);
21            if(a[m]>ele){
22                ans=m;
23                h=m-1;
24            }
25            else{
26                l=m+1;
27            }
28        }
29        return ans;
30    }
31public:
32    vector<int> searchRange(vector<int>& nums, int target) {
33        int lb=lowerbound(nums,target);
34        if(lb>=nums.size()||nums[lb]!=target) return {-1,-1};
35        else return {lb,upperbound(nums,target)-1};
36    }
37};
38// if(lb>=nums.size()||nums[lb]!=target) return {-1,-1};
39// here if my lb>=n then the number doesn't exists in the array