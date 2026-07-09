class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long sum = 0;

        for (auto x : nums)
            sum += x;

        sum = sum % p;

        if (sum == 0)
            return 0;

        map<long, long> mp;

        nums[0] = nums[0] % p;
        mp[0] = -1;
        mp[nums[0]] = 0;

        long n = nums.size();
        long ans = n;

        for (long i = 1; i < n; i++) {
            nums[i] = (nums[i - 1] + nums[i]) % p;

            long lookfor = (p + nums[i] - sum) % p;

            if (mp.find(lookfor) != mp.end()) {
                ans = min(ans, i - mp[lookfor]);
            }

            mp[nums[i]] = i;
        }

        return ans == n ? -1 : ans;
    }
};
