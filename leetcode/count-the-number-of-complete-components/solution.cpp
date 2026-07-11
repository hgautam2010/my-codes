class Solution {
public:
    bool bfs(vector<int>& edgeToNote, vector<vector<int>>& graph, vector<int>& visited, int start) {
        long long e = 0;
        long long nodes = 0;

        queue<int> q;
        q.push(start);

        while (!q.empty()) {
            int v = q.front();
            q.pop();

            e += edgeToNote[v];
            ++nodes;

            for (auto u : graph[v]) {
                if (!visited[u]) {
                    visited[u] = true;
                    q.push(u);
                }
            }
        }

        return nodes * (nodes - 1) == e;
    }

    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<int> edgeToNote(n, 0);
        vector<vector<int>> graph(n);

        for (auto e : edges) {
            int u = e[0];
            int v = e[1];

            ++edgeToNote[u];
            ++edgeToNote[v];

            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        vector<int> visited(n, false);
        int result = 0;

        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                visited[i] = true;
                if (bfs(edgeToNote, graph, visited, i)) {
                    result++;
                }
            }
        }

        return result;
    }
};
