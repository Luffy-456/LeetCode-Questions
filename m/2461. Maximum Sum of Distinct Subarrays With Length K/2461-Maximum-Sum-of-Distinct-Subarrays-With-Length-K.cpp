class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        set<int>s;
        int l=0;long long sum=0,curr=0;
        for(int r=0;r<nums.size();r++){
            while(s.count(nums[r]) || s.size()==k){
                s.erase(nums[l]);
                curr-=nums[l];
                l++;
            }
            curr+=nums[r];
            s.insert(nums[r]);
            if(s.size()==k) sum=max(sum,curr);
        }
        return sum;
    }
};