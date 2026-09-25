class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1 = 0, count2 = 0;
        int cand1 = 0, cand2 = 1;
        
        for (int n : nums) {
            if (cand1 == n) {
                count1++;
            } else if (cand2 == n) {
                count2++;
            } else if (count1 == 0) {
                cand1 = n;
                count1 = 1;
            } else if (count2 == 0) {
                cand2 = n;
                count2 = 1;
            } else {
                count1--;
                count2--;
            }
        }
        
        count1 = 0;
        count2 = 0;
        for (int n : nums) {
            if (n == cand1) count1++;
            else if (n == cand2) count2++;
        }
        
        vector<int> result;
        int n = nums.size();
        if (count1 > n / 3) result.push_back(cand1);
        if (count2 > n / 3) result.push_back(cand2);
        
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna