1class Solution {
2private:
3    int merge(vector<int>& nums,int s,int mid,int e){
4        vector<int>t;
5        int left=s;
6        int right=mid+1;
7        int c=0;
8        for(int i = s; i <= mid; i++){
9            while(right <= e && (long long)nums[i] > 2LL * nums[right]){
10                right++;
11            }
12            c += (right - (mid + 1));
13        }
14        right=mid+1;
15        while(left<=mid && right<=e){
16            if(nums[left]<=nums[right]){
17                t.push_back(nums[left]);
18                left++;
19            }
20            else{
21                t.push_back(nums[right]);
22                right++;
23            }
24        }
25
26        while(left<=mid){
27            t.push_back(nums[left]);
28            left++;
29        }
30        while(right<=e){
31            t.push_back(nums[right]);
32            right++; 
33        }
34
35        for(int i=s;i<=e;i++){
36            nums[i]=t[i-s];
37        }
38
39        return c;
40
41    }
42    int mergesplit(vector<int>& nums,int s,int e){
43        int c=0;
44        //base case
45        if(s>=e){
46            return c;
47        }
48        int mid=(s+e)/2;
49        //left part split
50        c+=mergesplit(nums,s,mid);
51
52        //right part split
53        c+=mergesplit(nums,mid+1,e);
54
55        //merging splitted part
56        c+=merge(nums,s,mid,e);
57
58        return c;
59
60    }
61public:
62    int reversePairs(vector<int>& nums) {
63       return mergesplit(nums,0,(nums.size()-1));
64    }
65};