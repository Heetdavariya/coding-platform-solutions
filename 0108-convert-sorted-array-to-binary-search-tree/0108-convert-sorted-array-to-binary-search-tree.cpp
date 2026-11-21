/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* helper(vector<int> &nums,int st,int end){
        if(st > end) return nullptr;

        int mid = st + (end-st)/2;

        TreeNode *newNode = new TreeNode(nums[mid]);
        newNode->left = helper(nums,st,mid-1);
        newNode->right = helper(nums,mid+1,end);

        return newNode;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper(nums,0,size(nums)-1);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna