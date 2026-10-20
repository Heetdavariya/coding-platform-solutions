class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        int largest=1;
        unordered_set<int> st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }

        for(auto i : st){
            if(st.find(i-1) == st.end()){
                int cnt = 1;
                int x = i;
                while(st.find(x+1) != st.end()){
                    cnt++;
                    x=x+1;
                }
                largest = max(largest,cnt);
            }
        }
        return largest;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna