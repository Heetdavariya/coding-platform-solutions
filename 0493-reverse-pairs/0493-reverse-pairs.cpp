class Solution {
public:
    void merge(vector<int>& arr, int low, int mid, int high) {
        vector<int> ans;
        int left = low;
        int right = mid + 1;
        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right]) {
                ans.push_back(arr[left]);
                left++;
            } else {
                ans.push_back(arr[right]);
                right++;
            }
        }
        while (left <= mid) {
            ans.push_back(arr[left]);
            left++;
        }
        while (right <= high) {
            ans.push_back(arr[right]);
            right++;
        }
        for (int i = low; i <= high; i++) {
            arr[i] = ans[i - low];
        }
    }

    int countPairs(vector<int>& arr, int low, int mid, int high) {
        int cnt = 0;
        int right = mid + 1;
        for (int i = low; i <= mid; i++) {
            while (right <= high && arr[i] > 2LL * arr[right]) {
                right++;
            }
            cnt = cnt + right - (mid + 1);
        }
        return cnt;
    }

    int mergesort(vector<int>& arr, int low, int high) {
        int cnt = 0;
        if (low >= high)
            return cnt;
        int mid = (low + high) / 2;
        cnt += mergesort(arr, low, mid);
        cnt += mergesort(arr, mid + 1, high);
        cnt += countPairs(arr, low, mid, high);
        merge(arr, low, mid, high);
        return cnt;
    }
    int reversePairs(vector<int>& nums) {
        return mergesort(nums, 0, size(nums) - 1);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna