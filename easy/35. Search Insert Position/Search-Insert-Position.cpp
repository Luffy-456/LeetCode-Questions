1int bs(vector<int>&nums,int target){
2    int l=0,h=nums.size()-1;
3    while(l<=h){
4        int m=(l+h)/2;
5        if(nums[m]==target){
6            return m;
7        }
8        else if(target>nums[m]){
9            l=m+1;
10        }
11        else{
12            h=m-1;
13        }
14    }
15    return l;
16}
17
18class Solution {
19public:
20    int searchInsert(vector<int>& nums, int target) {
21        int size=nums.size();
22        int ans=bs(nums,target);
23return ans;
24    }
25};