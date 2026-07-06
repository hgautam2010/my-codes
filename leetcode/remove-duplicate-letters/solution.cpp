class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> last(26, -1);
        vector<bool> used(26, false);

        for (int i = 0; i < s.size(); i++) {
            last[s[i] - 'a'] = i;
        }

        stack<int> st;

        for (int i = 0; i < s.size(); i++) {
            while (!st.empty() && s[st.top()] > s[i] &&
                   last[s[st.top()] - 'a'] > i && !used[s[i] - 'a']) {
                used[s[st.top()] - 'a'] = false;
                st.pop();
            }
            if (!used[s[i] - 'a']) {
                used[s[i] - 'a'] = true;
                st.push(i);
            }
        }

        string result;

        while (!st.empty()) {
            result.push_back(s[st.top()]);
            st.pop();
        }

        reverse(result.begin(), result.end());

        return result;
    }
};
