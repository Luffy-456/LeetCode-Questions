1class Solution {
2public:
3    vector<int> findDisappearedNumbers(vector<int>& nums) {
4        int size=nums.size();
5        vector<int>f(size+1,0);
6        vector<int>ans;
7        for (auto x:nums){
8            f[x]++;
9        }
10        for(int i=1;i<=size;i++){
11            if(f[i]==0){
12                ans.push_back(i);
13            }
14        }
15    return ans;
16    }
17};