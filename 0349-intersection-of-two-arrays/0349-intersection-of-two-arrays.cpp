class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        set<int> ans;
        int n1 = nums1.size();
        int n2 = nums2.size();
        int i=0;
        int j=0;
        while(i<n1 && j<n2){
            if(nums1[i] == nums2[j]){
                ans.insert(nums1[i]);
                i++,j++;
            }else if( nums1[i] < nums2[j]){
                i++;
            }else{
                j++;
            }
        }
        vector<int>javab = {ans.begin(),ans.end()};
        return javab;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna