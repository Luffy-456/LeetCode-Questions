1class Solution {
2public:
3    vector<int> plusOne(vector<int>& digits) {
4        vector<int>t=digits;
5        int size=t.size();
6        for(int i=size-1;i>=0;i--){
7            if(t[i]<9){
8                t[i]+=1;
9                return t;
10            }
11            else{
12                t[i]=0;
13                if(i==0){
14                    t.insert(t.begin(),1);
15                }
16            }
17        }
18        return t;
19    }
20};