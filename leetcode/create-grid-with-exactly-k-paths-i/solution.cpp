class Solution {
public:
    vector<string> createGrid(int m, int n, int k) {
        if (m == 1 || n == 1) {
            if (k != 1) {
                return vector<string>();
            } else {
                return vector<string>(m, string(n, '.'));
            }
        }

        vector<string> result(m, string(n, '#'));

        for (int i = 0; i < n; i++) {
            result[0][i] = '.';
        }

        for (int i = 0; i < m; i++) {
            result[i][n - 1] = '.';
        }

        if (k == 2) {
            result[1][n - 2] = '.';
        }

        if (k == 3) {
            if (n > 2) {
                result[1][n-2] = '.';
                result[1][n-3] = '.';
            } else if ( m > 2) {
                result[1][0] = '.';
                result[2][0] = '.';
            } else {
                return vector<string>();
            }
        }

        if (k == 4) {
            if ( n >= 3 && m >= 3) {
                result[0][n - 1] = '#';
                result[1][n - 2] = '.';
                result[1][n - 3] = '.';
                result[2][n - 2] = '.';
            } else if (n >= 4) {
                result[1][n - 2] = '.';
                result[1][n - 3] = '.';
                result[1][n - 4] = '.';
            } else if (m >= 4) {
                result[1][0] = '.';
                result[2][0] = '.';
                result[3][0] = '.';
            } else {
                return vector<string>();
            }
        }

        return result;
    }
};
