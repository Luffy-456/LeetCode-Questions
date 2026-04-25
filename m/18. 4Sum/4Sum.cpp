1class Solution {
2public:
3    vector<vector<int>> fourSum(vector<int>& nums, int target) {
4        int n=nums.size();
5        sort(nums.begin(),nums.end());
6        vector<vector<int>> ans;
7        for(int i=0;i<n;i++){
8            if(i>0 && nums[i]==nums[i-1]) continue;
9            for(int j=i+1;j<n;j++){
10                if(j>i+1 && nums[j]==nums[j-1]) continue;
11                int k=j+1;
12                int l=n-1;
13                while(k<l){
14                    long long s= 1LL * nums[i]+nums[j]+nums[k]+nums[l];                        
15                    if(s<target){
16                        k++;
17                    }
18                    else if(s>target){
19                        l--;
20                    }
21                    else{
22                        vector<int>t={nums[i],nums[j],nums[k],nums[l]};
23                        ans.push_back(t);
24                        k++;
25                        l--;
26                        while(k<l && nums[k]==nums[k-1]) k++;
27                        while(k<l && nums[l]==nums[l+1]) l--;
28                    }
29                }
30            }
31
32        }
33        return ans;
34    }
35};
36// meaning long long s = (long long)nums[i] + nums[j] + nums[k] + nums[l];
37//long long s= 1LL * nums[i]+nums[j]+nums[k]+nums[l];