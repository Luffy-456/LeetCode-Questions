1//here i'm using a map (first place will store the element & second will storte the frequency )in which i will store the frequency of the elements that are present in my nums vector after that i will find if any elemets cross the limit of n/3 if yes then i will store all the elements in the vector a and return it 
2class Solution {
3public:
4    vector<int> majorityElement(vector<int>& nums) {
5        map<int,int>mp;
6        vector<int>a;
7        for(int i=0;i<nums.size();i++){
8            mp[nums[i]]+=1;
9        }
10        for(auto it: mp){
11            if(it.second>(nums.size()/3)){
12                a.push_back(it.first);
13            }
14        }
15    return a;
16    }
17};