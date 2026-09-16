class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
    //    cout << r << " " << c;
        // vector<int>row(r,0); -> matrix[0][..]
        // vector<int>column(c,0); -> matrix[..][0]
        int col0 = 1;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j] == 0){
                    matrix[i][0]=0;
                    if(j!=0){
                        matrix[0][j] = 0;
                    }else{
                        col0=0;
                    }
                }
            }
        }

        for(int i=1;i<r;i++){
            for(int j=1;j<c;j++){
                if(matrix[i][j] != 0){
                    if(matrix[0][j] == 0 || matrix[i][0] == 0){
                    matrix[i][j] = 0;
                }
                }
                
            }
        }

        if(matrix[0][0]==0){
            for(int j=0;j<c;j++) matrix[0][j] = 0;
        }
        if(col0==0){
            for(int i=0;i<r;i++) matrix[i][0] = 0;
        }
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna