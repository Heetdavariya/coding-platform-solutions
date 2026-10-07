class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> merged;
        int i = 0;
        int j = 0;
        while (i < n1 && j < n2) {
            if (nums1[i] <= nums2[j]) {
                merged.push_back(nums1[i]);
                i++;
            } else {
                merged.push_back(nums2[j]);
                j++;
            }
        }
        while (i < n1) {
            merged.push_back(nums1[i]);
            i++;
        };
        while (j < n2){
            merged.push_back(nums2[j]);
            j++;
        };
        // for(auto i : merged) cout << i << " ";
        int mid = -1;
        mid = merged.size()/2;
        if(merged.size() % 2 == 0){
            double ans = (double(merged[mid]) + double(merged[mid-1]))/2;
            return ans;
        }
        return merged[mid];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna