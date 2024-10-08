class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<vector<pair<int, double>>> graph(n, vector<pair<int, double>>());
        for (int i = 0, size = edges.size(); i < size; i++) {
            vector<int>& e = edges[i];
            graph[e[0]].push_back({e[1], succProb[i]});
            graph[e[1]].push_back({e[0], succProb[i]});
        }
        vector<bool> vis(n, false);
        priority_queue<pair<double, int>> que;
        que.push({1.0, start});
        while (que.size() != 0) {
            int size = que.size();
            while (size-- > 0) {
                pair<double, int> rvtx = que.top();
                que.pop();
                if (rvtx.second == end) {
                    return rvtx.first;
                }
                vis[rvtx.second] = true;
                for (pair<int, double>& e : graph[rvtx.second]) {
                    if (!vis[e.first]) {
                        que.push({e.second * rvtx.first, e.first});
                    }
                }
            }
        }
        return 0;
    }
};