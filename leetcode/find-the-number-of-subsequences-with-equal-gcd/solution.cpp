class Solution {
public:
    int MOD = 1e9 + 7;

    int solve(vector<vector<vector<int>>>& dp, vector<int>& nums, int i, int first, int second) {
        if (i == nums.size()) {
            return first == second && first != 0 && second != 0;
        }

        if (dp[i][first][second] != -1) {
            return dp[i][first][second];
        }

        int skip = solve(dp, nums, i + 1, first, second);
        int firstCo = solve(dp, nums, i + 1, __gcd(first, nums[i]), second);
        int secondCo = solve(dp, nums, i + 1, first, __gcd(second, nums[i]));

        dp[i][first][second] = (0ll + skip + firstCo + secondCo) % MOD;

        return dp[i][first][second];
    }

    int subsequencePairCount(vector<int>& nums) {
        vector<vector<vector<int>>> dp(nums.size(), vector(201, vector(201, -1)));
        return solve(dp, nums, 0, 0, 0);
    }
};
