1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        int n=nums.size();
5
6//optimal below:
7        int cnt=0,ele;
8        for(int i=0;i<n;i++){
9            if(cnt==0){
10                cnt=1;
11                ele=nums[i];
12            }
13            else if(ele==nums[i]){
14                cnt++;
15            }
16            else{
17                cnt--;
18            }
19        }
20
21        int cnt1=0;
22        for(int i=0;i<n;i++){
23            if(ele==nums[i]) cnt1++;
24        }
25        if(cnt1>(n/2)) {return ele;}
26
27
28
29//better below: 
30
31        // map <int, int> f;
32        // for(int i=0;i<n;i++){
33        //     f[nums[i]]++;
34        // }
35
36        // for(auto i:f){
37        //     if(i.second>(n/2)){
38        //         return i.first;
39        //     }
40        // }
41
42
43// brute force below (time taken > limit):
44
45    //     vector<int>f;
46    //     for(int i=0;i<n;i++){
47    //         int c=0;
48    //         for(int j=0;j<n;j++){
49    //             if(nums[i]==nums[j]){
50    //                 c++;
51    //             }
52    //         }
53    //         f.push_back(c);
54    //     }
55    //     int s=f[0];
56    //     for(int i=0;i<n;i++){
57    //         if(s<f[i]){
58    //             s=f[i];
59    //         }
60    //         if(s>(n/2)){
61    //             return nums[i];
62    //         }
63    //     }
64
65
66    return -1;
67    }
68};