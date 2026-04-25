1//optimal modified for less time
2class Solution {
3public:
4    int maxArea(vector<int>& height) {
5        int i=0,j=height.size()-1,total_water=INT_MIN;
6        while(j>i){
7            int height_of_water=min(height[i],height[j]);
8            int distance_between=j-i;
9            total_water=max(total_water,height_of_water * distance_between);
10            if(height[i]<height[j]){
11              i++;
12            } 
13            else j--;
14        }
15        return total_water;
16    }
17};
18// optimal 4ms
19// class Solution {
20// private:
21// int cal(vector<int>& height,int i,int j){
22//     int distance_between=j-i;
23//     int height_of_water=min(height[i],height[j]);
24//     return distance_between*height_of_water;
25// }
26// public:
27//     int maxArea(vector<int>& height) {
28//         int i=0,j=height.size()-1,total_water=cal(height,i,j);
29//         while(j>i){
30//             total_water=max(total_water,cal(height,i,j));
31//             if(height[i]<height[j]){
32//               i++;
33//             } 
34//             else j--;
35//         }
36//         return total_water;
37//     }
38// };
39
40// brute force
41// class Solution {
42// public:
43//     int maxArea(vector<int>& height) {
44//         int n=height.size(),w,h;vector<int>t;
45//          for(int i=0;i<n;i++){
46//             for(int j=1;j<n;j++){
47//                 w=j-i;h=min(height[i],height[j]);
48//                 t.push_back(w*h);
49//             }
50//          }
51//         return *max_element(t.begin(),t.end());
52//     }
53// };