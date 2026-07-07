class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) return false;

        int n = s.size();

        vector<int> lps(n + 1, 0);

        int len = 0, i = 1;

        while (i < n) {
            if (goal[len] == goal[i]) {
                len++;
                lps[i] = len;
                i++;
            } else {
                if (len != 0) {
                    len = lps[len - 1];
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }

        s = s + s;

        int j = 0;
        i = 0;

        while (i < s.size()) {
            if (s[i] == goal[j]) {
                i++;
                j++;
                if (j == n) return true;
            } else {
                if (j != 0) {
                    j = lps[j - 1];
                } else {
                    i++;
                }
            }
        }

        return false;
    }
};
