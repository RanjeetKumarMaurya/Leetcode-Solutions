class Solution {
public:
    int trap(vector<int>& arr) {
        
        //O(N) time space and O(n) space complexity solutions
        int res = 0;
        int n = arr.size();
        vector<int> lMax(n);
        vector<int> rMax(n);
        lMax[0] = arr[0];
        rMax[n-1] = arr[n-1];
        for(int i = 1; i < n; i++){
            if(arr[i] > lMax[i-1])
                lMax[i] = arr[i];
            else
                lMax[i] = lMax[i-1];
        }
        for(int i = n-2; i >=0; i--){
            if(arr[i] > rMax[i+1])
                rMax[i] = arr[i];
            else
                rMax[i] = rMax[i+1];
        }
        
        for(int i = 0; i < n; i++){
            res += min(lMax[i], rMax[i]) - arr[i];
        }
        return res;
        
        //Brute Force - O(n^2) solution
        /*
        int res = 0;
        for(int i = 1; i < arr.size(); i++){
            int left = arr[i];
            for (int j=0; j<i; j++)
               left = max(left, arr[j]);
            int right = arr[i];
            for (int j=i+1; j<arr.size(); j++)
               right = max(right, arr[j]); 
           res = res + (min(left, right) - arr[i]);
        }
       return res;
       */
    }
};