1class Solution {
2private:
3    int bs(vector<int>& a,int ele){
4        int n=a.size();
5        int l=0,h=n-1;
6        while(l<=h){
7            int m=l+((h-l)/2);
8            
9            if(a[m]==ele){
10                return m;
11            }
12            else if(a[m]>ele){
13                h=m-1;
14            }
15            else{
16                l=m+1;
17            }
18        }
19        return -1;
20    }
21public:
22    int search(vector<int>& nums, int target) {
23        return bs(nums,target);
24    }
25};