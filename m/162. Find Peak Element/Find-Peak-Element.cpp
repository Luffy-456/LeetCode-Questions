1class Solution {
2public:
3    int findPeakElement(vector<int>& a) {
4        int n=a.size();
5        int l=0,h=n-1;
6        if(n==1) return 0;
7        if(n==2){
8            if(a[n-1]>a[n-2]){
9             return n-1;
10            }
11            else{
12                return n-2;
13            }
14        }
15        while(l<h){
16            int m=l+(h-l)/2;
17            if(a[m]<a[m+1]){
18                l=m+1;
19            }
20            else{
21                h=m;
22            }
23        }
24        return l;
25    }
26};