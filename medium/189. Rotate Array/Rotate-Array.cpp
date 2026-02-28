1class Solution {
2public:
3    void rotate(vector<int>& nums, int k) {
4        int size=nums.size();
5        vector<int>t(size);
6        for(int i=0;i<size;i++){
7            t[(i+k)%size]=nums[i];
8        }
9        
10        nums=t;
11    }
12};