class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int C = matrix[0].size();
        int low = 0;
        int high = matrix.size() * matrix[0].size() - 1;
        while(low <= high){
            int mid = (low+high) / 2;
            int row = mid / C;
            int col = mid % C;
            if(matrix[row][col] == target)
                return true;
            if(matrix[row][col] > target)
                high = mid-1;
            else
                low = mid+1;
        }
        return false;
    }
};