#define ld long double
const int mx = 1e4+5;
class Solution {
public:

    vector<ld> dijkstra(int node , vector<pair<int,ld>>adj[] , int n)
    {
        vector<ld>ret(n+1,-1);
        priority_queue<pair<ld,int>,vector<pair<ld,int>>>pq;
        pq.push({1,node});
        ret[node] = 1;
        while(pq.size())
        {
            int v = pq.top().second;
            ld cost = pq.top().first;
            pq.pop();
            if(ret[v] > cost)
            continue;
            for(auto& [child,c] : adj[v])
            {
                if(c*cost > ret[child])
                {
                    ret[child] = c*cost;
                    pq.push({ret[child],child});
                }
            }
        }
        return ret;
    }

    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        vector<pair<int,ld>>adj[mx]{};
        for(int i = 0 ; i < edges.size() ; ++i)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            ld w = succProb[i];
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }
        vector<ld>ans = dijkstra(start_node , adj , n);
        if(ans[end_node] != -1)
            return ans[end_node];
        else
            return 0;
    }
};
