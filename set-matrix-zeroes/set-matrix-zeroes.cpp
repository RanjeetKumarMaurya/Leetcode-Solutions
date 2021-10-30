class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        //Approach 2
        bool isCol = false;
        int row = matrix.size();
        int col = matrix[0].size();
        
        for (int i = 0; i < row; i++) {
          if (matrix[i][0] == 0) {
            isCol = true;
          }

          for (int j = 1; j < col; j++) {
            // If an element is zero, we set the first element of the corresponding row and column to 0
            if (matrix[i][j] == 0) {
              matrix[0][j] = 0;
              matrix[i][0] = 0;
            }
          }
        }
        
        for(int i = 1; i < row; i++){
            for(int j = 1; j < col; j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        
        for(int i = 1; i < row; i++){
            for(int j = 1; j < col; j++){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
        
        // See if the first row needs to be set to zero as well
    if (matrix[0][0] == 0) {
      for (int j = 0; j < col; j++) {
        matrix[0][j] = 0;
      }
    }

    // See if the first column needs to be set to zero as well
    if (isCol) {
      for (int i = 0; i < row; i++) {
        matrix[i][0] = 0;
      }
    }
        
        
        /*
        Approach - 01:
        int row = matrix.size();
        int col = matrix[0].size();
        
        vector<int> rowV(row, 1);
        vector<int> colV(col, 1);
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(matrix[i][j]==0){
                    rowV[i]=0;
                    colV[j]=0;
                }
            }
        }
        
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(rowV[i]==0 || colV[j]==0)
                    matrix[i][j]=0;
            }
        }
    */
    }
};