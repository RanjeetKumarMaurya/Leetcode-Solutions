class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int me = 0;
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(count == 0)
                me = nums[i];
            if(nums[i]==me)
                count++;
            else
                count--;
        }
        return me;
        
        //Moore voting algorithms
//         int count = 0;
//         int candidate = -1;

//         for (auto num : nums) {
//             if (count == 0) {
//                 candidate = num;
//             }
//             count += (num == candidate) ? 1 : -1;
//         }

//         return candidate;
        
        //General Approach
        // if(nums.size() ==1)
        //     return nums[0];
        // sort(nums.begin(), nums.end());
        // int index = nums.size() / 2;
        // int res;
        // for(int i = 0; i < nums.size()-index; i++){
        //     if(nums[i] == nums[index +i - 1])
        //         res = nums[i];
        // }
        // return res;
    }
};