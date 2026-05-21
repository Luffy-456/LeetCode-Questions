1class Solution {
2public:
3    bool isAdjacentDiffAtMostTwo(string s) {
4        for(int i=0;i<s.length()-1;i++){
5            if(abs(s[i]-s[i+1])>2) return false;
6        }
7        return true;
8    }
9};