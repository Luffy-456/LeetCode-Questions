1class Solution {
2public:
3    int findMin(vector<int>& a) {
4        int l=0,h=a.size()-1,ans=INT_MAX;
5        while(l<=h){
6            int m=l+((h-l)/2);
7            if(a[l]<=a[m]){
8                ans=min(ans,a[l]);
9                l=m+1;
10            }
11            else{
12                ans=min(ans,a[m]);
13                h=m-1;
14            }
15        }
16            return ans;
17
18//other method both TC= O(logn)
19        // while(l<h){
20        //     int m=l+((h-l)/2);
21        //     if(a[m]>a[h]){
22        //         l=m+1;
23        //     }
24        //     else if(a[m]<=a[h]){
25        //         h=m;
26        //     }
27        // }
28        // return a[l];
29    }
30};