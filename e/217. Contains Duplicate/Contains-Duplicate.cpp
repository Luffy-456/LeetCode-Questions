1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        unordered_map<int,int>mp;
5        for(int i:nums){
6            mp[i]++;
7            if(mp[i]>1) return true;
8        }
9        return false;
10    }
11};
12// will store the frequency of the i in mp.second and mp.first will have the i if the mp.second >1 means duplicate