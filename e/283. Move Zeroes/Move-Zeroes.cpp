1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4        int size=nums.size();
5        vector<int>t(size,0);
6        int j=0;
7        for(int i=0;i<size;i++){
8            // if(nums[i-1]==0){
9            //     if(nums[i]!=0||nums[i]==0) {
10            //         t[j]=nums[i];
11            //         j++;
12            //     }
13            // }
14            if(nums[i]!=0){
15                t[j]=nums[i];
16                j++;
17            }
18        }
19        nums=t;
20    }
21};