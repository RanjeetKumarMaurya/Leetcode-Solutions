class Solution {
public:
    
    void subsetUtil(vector<int>& nums, int i, int j, vector<vector<int>>& output){
            if(i>j){
                output.push_back({});
                return;
            }
            int temp = nums[i];
            subsetUtil(nums, i+1, j, output);
            int m = output.size();
            int n = m;
            for(int i = 0; i < m; i++){
                vector<int> v = output[i];
                v.insert(v.begin(), temp);
                if(find(output.begin(), output.end(), v) == output.end()){
                    output.insert(output.begin()+n, v);
                    n++;
                }
            } 
        }   
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> output;
        subsetUtil(nums, 0, nums.size()-1, output);
        return output;
    }
};