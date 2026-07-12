class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<pair<int, int>> temp;

        for (int i = 0; i < n; i++) {
            temp.push_back({ arr[i], i });
        }

        sort(temp.begin(), temp.end());

        int rank = 0;
        int last = 1e9 + 1;

        for (int i = 0; i < arr.size(); i++) {
            if (last != temp[i].first) {
                rank++;
                last = temp[i].first;
            }
            arr[temp[i].second] = rank;
        }

        return arr;
    }
};
