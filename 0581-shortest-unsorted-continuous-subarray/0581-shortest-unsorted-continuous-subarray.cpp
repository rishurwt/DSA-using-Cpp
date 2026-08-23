class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size(), l = -1, r = -1, mn = nums[n - 1], mx = nums[0];
        for (int i = 0; i < n; i++) {
            mx = max(mx, nums[i]);
            mn = min(mn, nums[n - 1 - i]);
            if (nums[i] < mx) r = i;
            if (nums[n - 1 - i] > mn) l = n - 1 - i;
        }
        return l == -1 ? 0 : r - l + 1;
    }
};