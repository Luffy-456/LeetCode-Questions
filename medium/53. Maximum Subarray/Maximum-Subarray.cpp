1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4// solved using kadane's algo
5        int n=nums.size();
6            int sum=0; int m=INT_MIN;    
7        for(int i=0;i<n;i++){
8            sum+=nums[i];
9            
10            if(sum>m){
11                m=sum;
12            }
13            
14            if(sum<0){
15                sum=0;
16            }
17
18        }
19        return m;
20    }
21};