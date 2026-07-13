class Solution {
public:
    void sortIt(vector<int>& nums, int low, int high) {
        if (low >= high) return;

        int p = nums[low + rand() % (high - low)];

        int small, current, large;

        small = current = low;
        large = high;

        while (current <= large) {
            if (nums[current] < p) {
                swap(nums[small], nums[current]);
                current++;
                small++;
            } else if (nums[current] > p) {
                swap(nums[large], nums[current]);
                large--;
            } else {
                current++;
            }
        }

        sortIt(nums, low, small - 1);
        sortIt(nums, large + 1, high);
    }

    vector<int> sortArray(vector<int>& nums) {
        sortIt(nums, 0, nums.size() - 1);
        return nums;
    }
};
