class Solution {
public:
    void combinationSumHelper(int ind, int target, vector<int> candidates, vector<vector<int>>& output, vector<int> temp){
        //base condition
        if(ind == candidates.size()){
            if(target == 0){
                output.push_back(temp);
            }
            return;
        }
        
        //main code
        if(candidates[ind] <= target){
            temp.push_back(candidates[ind]);
            combinationSumHelper(ind, target-candidates[ind], candidates, output, temp);
       temp.pop_back();         
        }
        combinationSumHelper(ind+1, target, candidates, output, temp);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> output;
        vector<int> temp;
        combinationSumHelper(0, target, candidates, output, temp);
        return output;
    }
};