1class Solution {
2public:
3    vector<int> topKFrequent(vector<int>& nums, int k) {
4        unordered_map<int,int>um;
5        vector<pair<int,int>>v;
6        vector<int>ans;
7        //getting freq
8        for(auto i:nums)    um[i]++;
9        //transfer map to vector
10        for(auto &i:um){
11            v.push_back({i.first,i.second});
12        }
13        //sort the vector using custom sorting in descending order
14        sort(v.begin(),v.end(),[](auto &a,auto &b){
15            return a.second>b.second;
16        });
17        //getting all the start eles
18        for(auto i=0;i<k;i++){
19                ans.push_back(v[i].first);
20            }
21        return ans;
22    }
23};
24//TC: O(n)+O(n)+O(nlogn)+O(k)=O(nlogn)