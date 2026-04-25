1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int size=nums.size();
5        vector<int> s;
6        int m=0,temp=0;
7        for (int i=0;i<size;i++){
8            if(nums[i]!=0){
9                m++;
10            }
11            else{
12                s.push_back(m);
13                m=0;
14            }
15        }
16        s.push_back(m);
17        temp=s[0];
18        for(int i=0;i<s.size();i++){
19            if(temp<s[i]){
20                temp=s[i];
21            }
22        }
23        if(size==0)
24        {
25            return 0;
26        }
27        else
28        {
29            return temp;
30        }
31
32    }
33    
34};