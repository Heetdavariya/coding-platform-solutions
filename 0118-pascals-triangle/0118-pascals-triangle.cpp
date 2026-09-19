class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=0;i<numRows;i++){
            ans.push_back(vector<int>(i+1));
        }
        for(int i=0;i<numRows;i++){
            for(int j=0;j<i+1;j++){
                if(j==0 || i==j){
                    ans[i][j] = 1;
                }else{
                    ans[i][j] = ans[i-1][j] + ans[i-1][j-1];
                }
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna