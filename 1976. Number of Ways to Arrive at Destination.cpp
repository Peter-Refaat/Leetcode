#define ll long long
class Solution {
private:
    vector<ll> ans, ways;
    vector<vector<pair<int, long long>>>adj;
    const ll mod = 1e9 + 7;
public:
    ll add(ll a, ll b) {
        return (1LL * a % mod + 1LL * b % mod + mod) % mod;
    }
    ll dijkstra(int n) {
        priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<>> pq;
        pq.push({0, 0});
        ans[0] = 0;
        ways[0] = 1;
        while (pq.size()) {
            auto [c, node] = pq.top();
            pq.pop();
            if (ans[node] < c)
                continue;
            for (auto& [child, cost] : adj[node]) {
                if (ans[child] >cost+c) {
                    ans[child] = cost+c;
                    ways[child] = ways[node]%mod;
                    pq.push({ans[child], child});
                } else if (ans[child] == cost  + c) {
                    ways[child] = add(ways[child], ways[node]);
                }
            }
        }
        return ways[n - 1];
    }
    ll countPaths(int n, vector<vector<int>>& roads) {
        adj.resize(n);
        ans.resize(n,1e18);
        ways.resize(n);
        for (auto& it : roads)
            adj[it[0]].emplace_back(it[1], it[2]),
                adj[it[1]].emplace_back(it[0], it[2]);
        return dijkstra(n);
    }
};
