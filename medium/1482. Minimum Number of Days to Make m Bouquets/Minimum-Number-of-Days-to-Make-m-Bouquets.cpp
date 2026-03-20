1class Solution {
2private:
3// this func will check if i can make the m with k condition
4    bool check(vector<int>& a, int m, int k,int mid){
5        int c=0,possi=0;
6        for(int i=0;i<a.size();i++){
7            if(a[i]<=mid){
8                c++;
9            }
10            else{
11                possi+=(c/k);
12                c=0;
13            }
14        }
15        possi+=(c/k);
16
17        if(possi<m){
18            return false;
19        }
20        else{
21            return true;
22        }
23    }
24public:
25    int minDays(vector<int>& a, int m, int k) {
26        if(a.size()<(1LL*m*k)) return -1;
27        int l=1,h=*max_element(a.begin(),a.end());
28        while(l<=h){
29            int mid=l+(h-l)/2;
30            if(check(a,m,k,mid)==true){
31                h=mid-1;
32            }
33            else{
34                l=mid+1;
35            }
36        }
37    return l;
38    }
39};