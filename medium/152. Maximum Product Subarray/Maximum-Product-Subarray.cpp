1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4        int n= nums.size();
5        int maxi=INT_MIN;
6        int p=1,s=1;
7        for(int i=0;i<n;i++){
8            if(p==0) p=1;
9            if(s==0) s=1;
10            p*=nums[i];
11            s*=nums[n-i-1];
12            maxi=max(maxi,(max(p,s)));
13        }
14        return maxi;
15    }
16};