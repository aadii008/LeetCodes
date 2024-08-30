class Solution {
public:
    int trap(vector<int>& height) {
        if (height.empty()) return 0;
        int n = height.size(), ans = 0, left = 0, right = n - 1, pre_max = 0, suf_max = 0;
        while (left <= right) {
            pre_max = max(pre_max, height[left]);
            suf_max = max(suf_max, height[right]);
            if (pre_max < suf_max) {
                ans += pre_max - height[left];
                left++;
            } else {
                ans += suf_max - height[right];
                right--;
            }
        }
        return ans;
    }
};