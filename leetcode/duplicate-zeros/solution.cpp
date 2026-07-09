class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> result;
        int j = 0, i = 0;
        int n = arr.size();

        for (auto x : arr) {
            i++;
            if (x == 0) {
                j++;
                if (j == n) break;
            }
            j++;
            if (j == n) break;
        }
        i--;

        for (int k = n - 1; i >= 0 && k >= 0; i--) {
            if (arr[i] == 0) {
                arr[k] = 0; k--;
                if (k >= 0)
                arr[k] = 0; k--;
            } else {
                arr[k] = arr[i];
                k--;
            }
        }
    }
};
