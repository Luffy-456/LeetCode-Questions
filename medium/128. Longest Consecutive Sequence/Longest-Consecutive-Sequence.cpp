1class Solution {
2public:
3    int longestConsecutive(vector<int>& nums) {
4        int n=nums.size();
5        if(n==0) return 0;
6        unordered_set<int>set;
7        for(auto x:nums){
8            set.insert(x);
9        }
10        int ans=1;
11        for(auto i:set){
12            if(set.find(i-1)==set.end()){
13                int cnt=1;
14                int current_ele=i;
15                while(set.find(current_ele+1)!=set.end()){
16                    cnt+=1;
17                    current_ele+=1;
18                }
19                ans=max(ans,cnt);
20            }
21        }
22        return ans;
23    }
24};