class Solution {
public:
    int quickSelect(vector<int>& arr, int l, int r, int k) {
        if (l == r) {
            return arr[l];
        }

        int p = l + (rand() % (r - l));
        int pv = arr[p];

        int small, current, large;

        small = current = l;
        large = r;

        while (current <= large) {
            if (arr[current] < pv) {
                swap(arr[small], arr[current]);
                small++;
                current++;
            } else if (arr[current] > pv) {
                swap(arr[large], arr[current]);
                large--;
            } else {
                current++;
            }
        }

        if (k < small) {
            return quickSelect(arr, l, small - 1, k);
        }

        if (k > large) {
            return quickSelect(arr, large + 1, r, k);
        }

        return pv;
    }

    int findKthLargest(vector<int>& nums, int k) {
        return quickSelect(nums, 0, nums.size() - 1, nums.size() - k);
    }
};
