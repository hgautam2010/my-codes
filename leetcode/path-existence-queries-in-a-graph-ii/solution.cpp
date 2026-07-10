class Solution {
public:
    vector<int> pathExistenceQueries(int n, vector<int>& nums, int maxDiff,
                                     vector<vector<int>>& q) {
        vector<pair<int, int>> sortedNums;

        for (int i = 0; i < n; i++) {
            sortedNums.push_back({nums[i], i});
        }

        sort(sortedNums.begin(), sortedNums.end());

        vector<int> mapToSorted(n);

        for (int i = 0; i < n; i++) {
            mapToSorted[sortedNums[i].second] = i;
        }

        vector<int> reachable(n);

        int r = 0;

        for (int l = 0; l < n; l++) {
            r = max(r, l);

            while (r + 1 < n && sortedNums[r + 1].first - sortedNums[l].first <= maxDiff) {
                r++;
            }

            reachable[l] = r;
        }

        int LOG = 0;

        while ((1LL << LOG) <= n) {
            LOG++;
        }

        vector<vector<int>> jump(LOG, vector<int>(n));

        for (int i = 0; i < n; i++) {
            jump[0][i] = reachable[i];
        }

        for (int i = 1; i < LOG; i++) {
            for (int j = 0; j < n; j++) {
                jump[i][j] = jump[i-1][jump[i-1][j]];
            }
        }

        vector<int> result(q.size(), 0);

        for (int i = 0; i < q.size(); i++) {
            int a = mapToSorted[q[i][0]];
            int b = mapToSorted[q[i][1]];

            if (a > b) {
                swap(a, b);
            }

            if (a == b) {
                result[i] = 0;
                continue;
            }

            int count = 0;
            int current = a;

            for (int k = LOG - 1; k >= 0; k--) {
                int next = jump[k][current];

                if (next < b && next > current) {
                    current = next;
                    count += (1LL << k);
                }
            }

            if (reachable[current] >= b) {
                result[i] = count + 1;
            } else {
                result[i] = -1;
            }
        }

        return result;
    }
};
