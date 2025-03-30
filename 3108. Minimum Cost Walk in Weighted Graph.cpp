struct DSU
{
  vector<int> parent, group, AND;
  DSU(int n)
  {
    parent.resize(n + 1);
    iota(parent.begin(), parent.end(), 0);
    group.resize(n + 1, 1);
    AND.resize(n+1,(1LL<<25)-1);
  }
  int find(int node)
  {
    if (parent[node] == node)
      return node;
    return parent[node] = find(parent[node]);
  }
  void merge(int u, int v, int _and)
  {
    int leader1 = find(u);
    int leader2 = find(v);
    if (leader1 == leader2)
    {
        AND[leader2] &= _and;
        return;
    }
    if (group[leader1] > group[leader2])
      swap(leader1, leader2);
    group[leader2] += group[leader1];
    parent[leader1] = leader2;
    AND[leader2] &= AND[leader1] & _and;
  }
  bool sameComponent(int u, int v)
  {
    return (find(u) == find(v));
  }
  int getSize(int u)
  {
    return group[find(u)];
  }
  int get(int u)
  {
    return AND[find(u)];
  }
};

class Solution {
public:
    vector<int> minimumCost(int n, vector<vector<int>>& edges, vector<vector<int>>& query) {
        DSU dsu(n);
        vector<int>ans;
        for(auto& it : edges)
        {
            dsu.merge(it[0],it[1],it[2]);
        }
        for(auto& it : query)
        {
            if(!dsu.sameComponent(it[0],it[1]))
                ans.push_back(-1);
            else ans.push_back(dsu.get(it[0]));
        }
        return ans;
    }
};
