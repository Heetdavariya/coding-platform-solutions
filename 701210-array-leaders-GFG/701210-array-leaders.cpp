class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        int n=arr.size();
        
        vector<int>ans;
        // for(int i=0;i<n;i++){
        //     int flag=1;
        //     for(int j=i+1;j<n;j++){
        //         if(arr[j] > arr[i]){
        //             flag=0;
        //             break;
        //         }
        //     }
        //     if(flag){
        //         ans.push_back(arr[i]);
        //     }
        // }
        int max = INT_MIN;
        for(int i=n-1;i>=0;i--){
            if(arr[i] >= max){
                max=arr[i];
                ans.push_back(arr[i]);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna