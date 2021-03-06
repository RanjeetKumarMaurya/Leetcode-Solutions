class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i = 0;
        int maxSum = INT_MIN;
        int currSum = 0;
        while(i < nums.size()){
            currSum += nums[i];
            if(currSum > maxSum)
                maxSum = currSum;
            if(currSum < 0)
                currSum = 0;
            i++;
        }
        return maxSum;
    }
};