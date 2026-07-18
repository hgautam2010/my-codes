class Solution {
public:
    int gcd(int a, int b) {
        if (a % b == 0) return b;
        return gcd(b, a % b);
    }
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        return gcd(nums[n - 1], nums[0]);
    }
};
