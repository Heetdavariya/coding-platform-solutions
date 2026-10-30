class Solution {
public:
    int maxArea(vector<int>& height) {
        int water = 0;
        int max_water = 0;
        int n = size(height);
        int i=0,j=n-1;
        while(i<j){
            int minn = min(height[i],height[j]);
            int ele = j-i;
            water = minn*ele;
            max_water = max(max_water,water);
            if(height[i] <= height[j]){
                i++;
            }else{
                j--;
            }
        }
        return max_water;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna