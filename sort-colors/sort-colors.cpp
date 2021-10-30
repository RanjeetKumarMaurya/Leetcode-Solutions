class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0, j=0, k=nums.size()-1;
        //int sz = nums.size();
        if(nums.size() <=1)
            return;
        if(nums.size()<=5){
            sort(nums.begin(), nums.end());
            return;
        }
        while(j<=k){

            while(nums[k]==2)
                k--;
            while(nums[i] == 0)
                i++;
            j = i;
            while(nums[j] == 1)
                j++;
            if(j>k)
                break;
            if(nums[k] == 0){
                swap(nums[i], nums[k]);
                i++;
            }
            if(nums[k] == 1){
                swap(nums[j], nums[k]);
                j++;
            }
        }
    }
};