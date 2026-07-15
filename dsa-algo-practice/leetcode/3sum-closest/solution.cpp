class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int ans = nums[0] + nums[1] + nums[2];

        for (int i = 0; i < n; i++) {
            int l = 0, r = n - 1;
            while (l < i && r > i) {
                int curr = nums[l] + nums[i] + nums[r];

                if (abs(curr - target) < abs(ans - target)) {
                    ans = curr;
                }

                if (curr < target) {
                    l++;
                } else {
                    r--;
                }
            }
        }

        return ans;
    }
};
