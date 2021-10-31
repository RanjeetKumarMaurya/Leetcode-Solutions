class Solution {
public:
    void transpose(vector<vector<int>>& matrix){
        for(int i = 0; i < matrix.size(); i++){
            for(int j = i; j < matrix[0].size(); j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
    void rotateUtil(vector<vector<int>>& matrix){
        for(int i = 0; i < matrix.size(); i++){
            int j = 0, k = matrix[0].size()-1;
            while(j<=k){
                swap(matrix[i][j], matrix[i][k]);
                j++, k--;
            }
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        rotateUtil(matrix);
    }
};