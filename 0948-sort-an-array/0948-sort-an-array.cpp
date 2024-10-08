class Solution {
public:
    void outPlaceMerge(vector<int> &nums, int low, int mid, int high) {
        if (low == high) return;
        int left = low, right = mid + 1;
        vector<int> temp;
        while (left <= mid && right <= high) {
            if (nums[left] <= nums[right]) {
                temp.push_back(nums[left]);
                left++;
            } else {
                temp.push_back(nums[right]);
                right++;
            }
        }
        while (left <= mid) { 
            temp.push_back(nums[left]);
            left++;
        }
        while (right <= high) {
            temp.push_back(nums[right]);
            right++;
        }
        for (int i = low; i <= high; i++) {
            nums[i] = temp[i - low];
        }
    }

    void mergeSort(vector<int> &nums, int low, int high) {
        if (low >= high) return;
        int mid = (high + low) / 2;
        mergeSort(nums, low, mid);
        mergeSort(nums, mid + 1, high);
        outPlaceMerge(nums, low, mid, high);
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};
