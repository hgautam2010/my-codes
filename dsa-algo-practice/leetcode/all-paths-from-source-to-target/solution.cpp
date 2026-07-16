class Solution {
public:
    vector<vector<int>> adj;
    vector<vector<int>> res;
    vector<int> sf;
    int last;

    void dfs(int u) {
        if (u == last) {
            res.push_back(sf);
            return;
        }

        for (auto v : adj[u]) {
            sf.push_back(v);
            dfs(v);
            sf.pop_back();
        }
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        adj = graph;
        last = graph.size() - 1;

        sf.push_back(0);

        dfs(0);

        return res;
    }
};
