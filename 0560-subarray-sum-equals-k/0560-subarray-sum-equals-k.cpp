class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int cnt=0,prefixSum=0;
        mpp[0]=1;
        for(int i=0;i<nums.size();i++){
            prefixSum+=nums[i];
            int need = prefixSum-k;
            if(mpp.find(need) != mpp.end()){
                cnt+=mpp[need];
            }
            mpp[prefixSum]++;
        }
        return cnt;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna