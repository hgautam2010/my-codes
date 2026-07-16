class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int l = 0, r = 0, n = customers.size();
        int cust = 0, mx = 0;

        while (r + 1 < minutes && r < n) {
            if (grumpy[r] == 1) {
                cust += customers[r];
                mx = max(cust, mx);
            }
            r++;
        }

        while (r < n) {
            if (grumpy[r] == 1) {
                cust += customers[r];
                mx = max(cust, mx);
            }

            if (grumpy[l] == 1) {
                cust -= customers[l];
            }

            r++;
            l++;
        }

        cust = 0;

        for (int i = 0; i < n; i++) {
            if (grumpy[i] == 0) {
                cust += customers[i];
            }
        }

        return cust+mx;
    }
};
