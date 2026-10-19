class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prefix = 1;
        int sufix = 1;
        int ans = INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(prefix==0) prefix = 1;
            if(sufix==0) sufix = 1;
            prefix*=nums[i];
            sufix*=nums[nums.size() - i - 1];
            ans = max(ans,max(sufix,prefix));
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna