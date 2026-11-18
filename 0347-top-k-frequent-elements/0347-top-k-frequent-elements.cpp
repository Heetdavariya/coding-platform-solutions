class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> st;
        int n = size(nums);
        for(int i=0;i<n;i++){
            st[nums[i]]++;
        }
        vector<int> ans;
        priority_queue<pair<int,int>> pq;
        for(auto i : st){
            pq.push({i.second,i.first});
        }

        for(int i=0;i<k;i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna