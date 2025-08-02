class Solution {
private:
    vector<int>parent,group;
public:
    Solution()
    {
        parent.resize(2e5 + 5);
        iota(parent.begin(),parent.end(),0);
        group.resize(2e5+5,1);
    }
    int find(int u)
    {
        if(parent[u]==u)
            return u;
        return parent[u] = find(parent[u]);
    }
    void merge(int u , int v)
    {
        int leader1 = find(u);
        int leader2 = find(v);
        if(leader1 == leader2)
            return;
        if(group[leader1] > group[leader2])
            swap(leader1,leader2);
        group[leader2] += group[leader1];
        parent[leader1] = leader2;
    }
    bool sameComponent(int u , int v)
    {
        return find(u)==find(v);
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        for(auto& it : edges)
        {
            merge(it[0],it[1]);
        }
        return sameComponent(source,destination);
    }
};
