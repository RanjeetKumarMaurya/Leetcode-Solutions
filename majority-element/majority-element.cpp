class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size() ==1)
            return nums[0];
        sort(nums.begin(), nums.end());
        int index = nums.size() / 2;
        int res;
        for(int i = 0; i < nums.size()-index; i++){
            if(nums[i] == nums[index +i - 1])
                res = nums[i];
        }
        return res;
    }
};