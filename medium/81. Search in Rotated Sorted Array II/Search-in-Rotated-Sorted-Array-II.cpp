1class Solution {
2private:
3    int modifiedBS(vector<int>& a, int ele) {
4        int l=0,h=a.size()-1;
5        while(l<=h){
6            int m=l+((h-l)/2);
7            if(a[m]==ele){
8                return true;
9            }
10// handel duplicates if they exists shirk the search space 
11            if(a[l]==a[m] && a[m]==a[h]){
12                l++;
13                h--;
14                continue;
15            }
16            else if(a[l]<=a[m]){
17                if(a[l]<=ele && ele<a[m]){
18                    h=m-1;
19                }
20                else{
21                    l=m+1;
22                }
23            }
24            else{
25                    if(a[m]<ele && ele<=a[h]){
26                        l=m+1;
27                    }
28                    else{
29                        h=m-1;
30                    }
31            }
32        }
33    return false;
34    }
35public:
36    bool search(vector<int>& nums, int target) {
37        return modifiedBS(nums,target);
38    }
39};