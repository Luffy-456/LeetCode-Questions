class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>se;
        int l=0,ans=0;
        for(int r=0;r<s.size();r++){
            while(se.count(s[r]) && l<=r){
                se.erase(s[l]);
                l++;
            }
            se.insert(s[r]);
            ans=max(ans,(int)se.size());
        }
        return ans;
    }
};