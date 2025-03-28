class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        vector<int>deg(numCourses);
        vector<bool>vis(numCourses);
        for(auto& it : prerequisites)
        {
            adj[it[1]].push_back(it[0]);
            deg[it[0]]++;
        }
        queue<int>topo;
        for(int i = 0 ; i < numCourses ; ++i)
            if(!deg[i]) topo.push(i) , vis[i] = true;
        while(topo.size())
        {
            int node = topo.front();
            vis[node] = 1;
            topo.pop();
            for(auto& child : adj[node])
            {
                deg[child]--;
                if(!deg[child])
                    topo.push(child);
            }
        }
        for(int i = 0 ; i < numCourses ; ++i)
            if(!vis[i])return false;
        return true;
    }
};
