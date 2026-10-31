class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = size(nums);
        int i = 0;
        int j = i+1;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            if(mp.find(nums[i]) != mp.end()){
                if(abs(i - mp[nums[i]]) <= k) return true;
            }
            mp[nums[i]] = i;
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna