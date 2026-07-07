class Solution {
public:
    bool isUpper(char c) {
        return c >= 'A' && c <= 'Z';
    }

    bool detectCapitalUse(string word) {
        int lower = 0, upper = 0;

        for (auto x : word) {
            if (isUpper(x)) upper++;
            else lower++;
        }

        if (lower == 0 || upper == 0) return true;

        return upper == 1 && isUpper(word[0]);
    }
};
