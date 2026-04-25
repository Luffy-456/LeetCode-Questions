1class Solution {
2private:
3    bool check(vector<int>& weights, int days, int mid){
4        int load=0,day=1;
5        for(int i=0;i<weights.size();i++){
6            if(load+weights[i]<=mid){
7                load+=weights[i];
8            }
9            else{
10                if(day<days) day++;
11                else return false;
12                load=weights[i];
13            }
14        }
15        return true;
16    }
17
18
19public:
20    int shipWithinDays(vector<int>& weights, int days) {
21        int l=*max_element(weights.begin(),weights.end()),h=accumulate(weights.begin(),weights.end(),0);
22        while(l<=h){
23            int mid=l+(h-l)/2;
24            if(check(weights,days,mid)==true){
25                h=mid-1;
26            }
27            else{
28                l=mid+1;
29            }
30        }
31        return l;
32    }
33};
34
35//accumulate(weights.begin(), weights.end(), 0); will sum all the ele and store in high