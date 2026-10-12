class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size() == 0) return false;
        int n = matrix.size();
        int m = matrix[0].size();
        int low = 0;
        int high = (m*n)-1;

        while(low<=high){
            int mid = (low + high) / 2;
            if(matrix[mid/m][mid%m] == target){
                return true;
            }else if(target > matrix[mid/m][mid%m]){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna