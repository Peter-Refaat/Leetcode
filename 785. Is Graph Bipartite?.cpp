class Solution {
public:

    bool bfs(int node , vector<vector<int>>&graph , vector<int>&color)
    {
        queue<int>q;
        q.push(node);
        color[node] = 1;
        while(q.size())
        {
            int cur = q.front();
            q.pop();
            for(auto& child : graph[cur])
            {
                if(color[child] == -1)
                color[child] = !color[cur] , q.push(child);
                else if(color[child] == color[cur])
                return false;
            }
        }
        return true;
    }


    bool isBipartite(vector<vector<int>>& graph) {
       int n = graph.size();
       vector<int>color(n,-1);
       for(int i = 0 ; i < n ; ++i)
       {
        if(color[i] == -1 and !graph[i].empty())
        {
            if(!bfs(i,graph,color))
            return false;
        }
       }
       return true;
    }
};
