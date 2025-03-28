class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        vector<int>deg(numCourses);
        for(auto& it : prerequisites)
        {
            adj[it[1]].push_back(it[0]);
            deg[it[0]]++;
        }
        queue<int>topo;
        vector<int>ans;
        for(int i = 0 ; i < numCourses ; ++i)
            if(!deg[i]) topo.push(i);
        while(topo.size())
        {
            int node = topo.front();
            ans.push_back(node);
            topo.pop();
            for(auto& child : adj[node])
            {
                deg[child]--;
                if(!deg[child])
                    topo.push(child);
            }
        }
        if(ans.size() < numCourses)
            return {};
        return ans;
    }
};
