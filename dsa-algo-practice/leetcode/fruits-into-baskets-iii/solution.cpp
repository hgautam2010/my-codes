struct SegTree {
    vector<int> st;
    int n;
    int INITIAL = 0;

    SegTree(vector<int>& v) {
        n = v.size();
        st.resize(4 * n + 5, INITIAL);
        build(1, 0, n - 1, v);
    }

    void build(int p, int l, int r, vector<int>& v) {
        if (l == r) {
            st[p] = v[l];
            return;
        }

        int m = l + ((r - l) >> 1);

        build(p << 1, l, m, v);
        build(p << 1 | 1, m + 1, r, v);

        st[p] = max(st[p << 1], st[p << 1 | 1]);
    }

    void update(int idx, int val) {
        update(1, 0, n - 1, idx, val);
    }

    void update(int p, int l, int r, int idx, int val) {
        if (l == r) {
            st[p] = val;
            return;
        }

        int m = l + ((r - l) >> 1);

        if (idx <= m) {
            update(p << 1, l, m, idx, val);
        } else {
            update(p << 1 | 1, m + 1, r, idx, val);
        }

        st[p] = max(st[p << 1], st[p << 1 | 1]);
    }

    int query(int mx) {
        return query(1, 0, n - 1, mx);
    }

    int query(int p, int l, int r, int mx) {
        if (st[p] < mx) {
            return -1;
        }

        if (l == r) {
            return l;
        }

        int m = l + ((r - l) >> 1);

        int left = query(p << 1, l, m, mx);

        if (left != -1) return left;

        return query(p << 1 | 1, m + 1, r, mx);
    }
};

class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        SegTree* st = new SegTree(baskets);

        int up = 0;

        for (int i = 0; i < fruits.size(); i++) {
            int lft = st->query(fruits[i]);

            if (lft == -1) {
                up++;
                continue;
            }

            st->update(lft, 0);
        }

        return up;
    }
};
