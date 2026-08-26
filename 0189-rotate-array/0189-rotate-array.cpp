class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        vector<int>arr(k);
        for(int i=1;i<=k;i++){
            arr[i-1] = nums[n-i];
        }
        for(int j=n-1-k;j>=0;j--){
            nums[j+k] = nums[j];
        }
        for(int l=0;l<k;l++){
            nums[k-l-1]=arr[l];
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna