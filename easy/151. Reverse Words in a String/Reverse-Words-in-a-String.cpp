1class Solution {
2public:
3    string reverseWords(string s) {
4        string ans="";
5        int last=s.length();
6        for(int i=s.length()-1;i>=0;i--){
7            // if(i>0 && s[i]==' ' && s[i-1]!=' '){
8            if(i>0 && s[i]==' '){
9                for (int t=i+1;t<last;t++){
10                    ans+=s[t];
11                }
12                
13                if(!(ans.empty()) && s[i-1]!=' '){
14                    ans+=' ';
15                }
16                last=i;
17                
18            }
19            else if(i==0){
20                int isch=(s[i]==' ')?1:0;
21                for(int j=isch;j<last;j++){
22                    ans+=s[j];
23                }
24            }
25        }
26        return ans;
27    }
28};