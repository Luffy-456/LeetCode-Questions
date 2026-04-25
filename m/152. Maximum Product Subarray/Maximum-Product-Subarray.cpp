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
// here i'm using prefix and suffix if i will just mul the next ele in the prefix i will get the max product , same goes for the suffix but this timw i'm going backwords cause:
//Traverse the array from left to right (prefix) to build cumulative product.
//Traverse the array from right to left (suffix) to catch subarrays ending at the back (helpful when max product is at the end or due to even negatives).
//Reset the product to 1 whenever a zero is found, as it breaks the subarray continuity.
//By comparing products in both directions at each step, we ensure we don’t miss any possible maximum.
