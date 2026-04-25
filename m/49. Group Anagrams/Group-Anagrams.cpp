1class Solution {
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& strs) {
4        unordered_map<string,vector<string>>um;
5        vector<vector<string>> ans;
6        for(auto i:strs){
7            string t=i;
8            sort(t.begin(),t.end());
9            um[t].push_back(i);
10        }
11        for(auto &i:um){
12            ans.push_back(i.second);
13        }
14        return ans;
15    }
16};