1class Solution {
2private:
3    int bs(vector<int>&nums,int target){
4        int l=0,h=nums.size()-1;
5        while(l<=h){
6            int m=l+((h-l)/2);
7            if(nums[m]==target){
8                return m;
9            }
10            else if(target>nums[m]){
11                l=m+1;
12            }
13            else{
14                h=m-1;
15            }
16        }
17        return l;
18    }
19public:
20    int searchInsert(vector<int>& nums, int target) {
21        int ans=bs(nums,target);
22return ans;
23    }
24};
25
26//made some optimizations
27
28//here l will return the insertion index
29// here h will return the floor(largest ele in arr <=x) value index & ceil(smallest ele in arr >=x) value index 
30// here h will also return the from where the higher elements started from the target ex:
31//nums = [1,3,5,6], target = 4
32//l = 2  (insert at index 2)
33//h = 1  (element 3)
