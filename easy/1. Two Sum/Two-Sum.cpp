1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4       map<int,int>mp;
5       int n=nums.size();
6       for(int i=0;i<n;i++){
7        int req=target-nums[i];
8        if(mp.find(req)!=mp.end()){
9            return {mp[req],i};
10        }
11        mp[nums[i]]=i;
12       }
13       return {-1,-1};
14    }
15};