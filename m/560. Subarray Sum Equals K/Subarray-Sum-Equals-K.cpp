1class Solution {
2public:
3    int subarraySum(vector<int>& nums, int k) {
4        unordered_map<int,int> mp;
5        int c=0,s=0;
6        mp[0]=1;
7
8        for(int i=0;i<nums.size();i++){
9            s+=nums[i];
10            int r=s-k;
11            c+=mp[r];
12            mp[s]+=1;
13
14        }
15        return c;
16    }
17};