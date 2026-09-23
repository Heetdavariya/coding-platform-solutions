class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int times = n/3;
        unordered_map<int,int>map;
        vector<int>ans;
        for(int i=0;i<n;i++){
            map[nums[i]]++;
        }
        for(auto i : map){
            if(i.second > times) ans.push_back(i.first);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna