class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans;
        for(auto n:nums)
        {
        n=abs(n);
        if(nums[n-1]>0)
            nums[n-1]*=-1;
        else 
            ans=n;
        }
        return ans;
    }
};