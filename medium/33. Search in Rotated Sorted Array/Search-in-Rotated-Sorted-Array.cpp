1class Solution {
2private:
3    int modified_bs(vector<int>& a, int ele) {
4        int l=0,h=a.size()-1;
5        while(l<=h){
6            int m=l+(h-l)/2;
7            if(a[m]==ele){
8                return m;
9            }
10            //checking if left side is sorted
11            else if(a[l]<=a[m]){
12                //checking if left side contains ele
13                if(a[l]<=ele && ele<a[m]){
14                    h=m-1;
15                }
16                else{
17                    l=m+1;
18                }
19            }
20            //left side isn't sorted so right must be
21            else{
22                //checking if right side contains ele
23                if(a[m]<ele && ele<=a[h]){
24                    l=m+1;
25                }
26                else{
27                    h=m-1;
28                }
29            }
30        }
31        return -1;
32    }
33
34public:
35    int search(vector<int>& nums, int target) {
36        return (modified_bs(nums,target));
37    }
38};