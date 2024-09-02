class Solution {
    public:
    int subarray(vector<int>& nums, int k) {
        int l = 0, r = 0, cnt = 0, n = nums.size();
        unordered_map<int, int> mp;
        while (r < n) {
            int val = nums[r];
            mp[val]++;
            while (mp.size() > k) {
                mp[nums[l]]--;
                if (mp[nums[l]] == 0)
                    mp.erase(nums[l]);
                l++;
            }
            cnt += r - l + 1;
            r++;
        }
        return cnt;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return subarray(nums, k) - subarray(nums, k - 1);
    }
};