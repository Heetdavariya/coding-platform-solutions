class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> javab;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i] == target){
                javab.push_back(i);
            }
        }
        return javab;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna