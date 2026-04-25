1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4        int n=nums.size();
5        int l=0; int h=n-1; int m=0;
6        while(m<=h){
7            if(nums[m]==0){
8                swap(nums[m],nums[l]);
9                m++;
10                l++;
11            }
12            else if(nums[m]==1){
13                m++;
14            }
15            else if(nums[m]==2){
16                // if(m<=h){
17                    swap(nums[m],nums[h]);
18                    // m++;
19                    h--;
20                // }
21            }
22        }
23    }
24};