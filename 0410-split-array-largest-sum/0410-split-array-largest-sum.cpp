class Solution {
public:
    bool ispossible(vector<int>& nums,int limit, int k){
        int student=1;
        int pages=0;
        for(auto i : nums){
            if(i > limit) return false;
            if(i+pages > limit){
                student++;
                pages = i;
            }else{
                pages+=i;
            }
        }
        if(student > k) return false;
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);
        while(low<high){
            int mid = (low+high)/2;
            if(ispossible(nums,mid,k)){
                high = mid;
            }else{
                low = mid+1;
            }
        }
        return high;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna