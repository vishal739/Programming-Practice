#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    const int MAXN = 10005;
    const int LOGN = 15;

    void dfs(int node, int parent, vector<int>& depth, vector<vector<int>>& dp, vector<vector<int>>& tree) {
        dp[node][0] = parent;
        depth[node] = depth[parent] + 1;

        for (int i = 1; i < LOGN; ++i) {
            dp[node][i] = dp[dp[node][i - 1]][i - 1];
        }

        for (int child : tree[node]) {
            if (child != parent) {
                dfs(child, node, depth, dp, tree);
            }
        }
    }

    int lca(int a, int b, const vector<int>& depth, const vector<vector<int>>& dp) {
        if (depth[a] < depth[b]) {
            swap(a, b);
        }

        // Bring a and b to the same depth
        for (int i = LOGN - 1; i >= 0; --i) {
            if (depth[a] - (1 << i) >= depth[b]) {
                a = dp[a][i];
            }
        }

        if (a == b) {
            return a;
        }

        // Move a and b upwards to find the LCA iteratively
        for (int i = LOGN - 1; i >= 0; --i) {
            if (dp[a][i] != dp[b][i]) {
                a = dp[a][i];
                b = dp[b][i];
            }
        }

        return dp[a][0];
    }

    vector<long long> calcPairs(int N, vector<int> p) {
        vector<vector<int>> tree(N);
        vector<vector<int>> dp(N, vector<int>(LOGN));
        vector<int> depth(N);

        for (int i = 1; i < N; ++i) {
            tree[p[i]].push_back(i);
            tree[i].push_back(p[i]);
        }

        dfs(0, 0, depth, dp, tree);

        vector<long long> lcaCount(N);

        for (int a = 1; a < N; ++a) {
            for (int b = a + 1; b < N; ++b) {
                int x = lca(a, b, depth, dp);
                lcaCount[x]++;
            }
        }

        vector<long long> result;
        for (int x = 1; x < N; ++x) {
            result.push_back(lcaCount[x]);
        }

        return result;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V;
        cin >> V;

        vector<int> par(V);
        for (int i = 0; i < V; ++i) {
            cin >> par[i];
        }

        Solution obj;
        vector<long long> ans = obj.calcPairs(V, par);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
