class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st;
        unordered_set<int> res;

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                st.insert(nums[i] ^ nums[j]);
            }
        }

        for (int i = 0; i < n; i++) {
            for (auto a : st) {
                res.insert(a ^ nums[i]);
            }
        }

        return res.size();
    }
};
