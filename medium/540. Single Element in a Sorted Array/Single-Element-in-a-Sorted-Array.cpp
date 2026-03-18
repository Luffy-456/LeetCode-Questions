1class Solution{
2public:
3    int singleNonDuplicate(vector<int>& a){
4        int n=a.size();
5        // a got 1 ele
6        if(n==1) return a[0];
7        // if single ele at start
8        if(a[0]!=a[1]) return a[0];
9        // if my single ele at the end of a
10        if(a[n-1]!=a[n-2]) return a[n-1];
11        int l=1,h=n-2;
12        while(l<=h){
13            int m=l+(h-l)/2;
14            // ex 2 2 3 4 4 , a[m]=3
15            if(a[m]!=a[m-1] && a[m]!=a[m+1]) return a[m];
16
17            if((m%2==0 && a[m]==a[m+1])||(m%2!=0 && a[m]==a[m-1]))
18            {
19                l=m+1;
20            }
21            else{
22                h=m-1;
23            }
24        }
25        return -1;
26    }
27};
28
29
30// mine where l==h means that's the single element
31// class Solution {
32// public:
33//     int singleNonDuplicate(vector<int>& a) {
34//         int n=a.size();
35//         int l=0,h=n-1;
36//         // int ans=0;
37//         while(l<h){
38//             int m=l+(h-l)/2;
39//             if(m%2==0){
40//                 if(a[m]==a[m+1]){
41//                         l=m+1;
42//                 }
43//                 else{
44//                         h=m;
45//                     }
46//             }
47//             else{
48//                 if(a[m]==a[m-1]){
49//                     l=m+1;
50//                 }
51//                 else{
52//                     h=m;
53//                 }
54//             }
55//             // if(l==h){
56//             //     ans=a[l];
57//             // }
58//         }
59//         // return ans;
60//         return a[l];
61//     }
62// };