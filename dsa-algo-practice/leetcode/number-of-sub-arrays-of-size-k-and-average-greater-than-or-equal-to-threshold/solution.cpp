class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int l = 0, r = 0, n = arr.size();
        long sum = 0, ans = 0;

        while (r < k - 1 && r < n) {
            sum += arr[r];
            r++;
        }

        while (l < n && r < n) {
            sum += arr[r];

            if (((double)sum / (double)k) >= (double)threshold) {
                ans++;
            }

            sum -= arr[l];

            l++;
            r++;
        }

        return ans;
    }
};
