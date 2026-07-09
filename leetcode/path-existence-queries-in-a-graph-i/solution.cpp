struct DSU {
    vector<int> parent, rank;
    DSU(int n) {
        parent.resize(n);
        rank.assign(n, 1);
        iota(parent.begin(), parent.end(), 0);
    }

    int find(int x) {
        if (x == parent[x]) return x;
        return parent[x] = find(parent[x]);
    }

    bool unite(int a, int b) {
        a = find(a);
        b = find(b);

        if (a == b) {
            return false;
        }

        if (rank[a] > rank[b]) {
            swap(a, b);
        }
        parent[a] = b;

        if (rank[a] == rank[b]) rank[b]++;

        return true;
    }

    bool same(int a, int b) {
        return find(a) == find(b);
    }
};

class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        int l = 0, r = 1;
        DSU dsu = DSU(n);
        vector<bool> result;

        while (l < n && r < n) {
            if (nums[r] - nums[l] <= maxDiff) {
                dsu.unite(l, r);
                r++;
            } else {
                l++;
            }
        }

        for (auto q : queries) {
            int u = q[0];
            int v = q[1];

            result.push_back(dsu.same(u, v));
        }

        return result;
    }
};
