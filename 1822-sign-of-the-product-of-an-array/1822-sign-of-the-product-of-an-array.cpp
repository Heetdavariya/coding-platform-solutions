class Solution {
public:
    int arraySign(vector<int>& nums) {
        int sign = 1;

        for (int i : nums) {
            if (i == 0) return 0;
            if (i < 0) sign *= -1;
        }

        return sign;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna