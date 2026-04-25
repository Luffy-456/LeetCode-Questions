1class Solution {
2private:
3    long long calk(vector<int>& a,int h){
4        long long findingNewK=0;
5        for(int i=0;i<a.size();i++){
6            findingNewK+=ceil((double)a[i]/h);
7        }
8        return findingNewK;
9    }
10public:
11    int minEatingSpeed(vector<int>& a, int h) {
12        int n=a.size();
13        int l=1,high=*max_element(a.begin(),a.end());
14        long long k;
15        while(l<=high){
16            int m=l+(high-l)/2;
17            k=calk(a,m);
18            if(k<=h){
19                    high=m-1;
20            }
21                else{
22                    l=m+1;
23                }
24            }
25        return l;
26    }
27};
28
29// calk() this will give me the k the total hours at which she can eat all the banans at speed m
30// m is the assumed the speed at which she can eat the bananas 
31// now if the k <= h(max limit of the hours)
32// then its acceptable which doesn't means that i have found the minimum speed at which she can finish all the bananas and time limit is also not exceded (>h) 
33// so the next is to find the new limits 
34// how i dicided the high & l
35// l is the minimum speed at which she will eat it can't be 0 (lol)
36// well if you look at this way the maximum number in the array is the maximum number of the bananas a pile can have so if i want to finish them my speed must lie in that range 
37// what's the point of getting out of that range it's not like i can east extra bananas if i finish mines in the (<h)