class Solution {
private:
struct P
{
  int x, y;
  void read()
  {
    cin >> x >> y;
  }
  void operator+=(int v)
  {
    x += v;
    y += v;
  }
  void operator-=(int v)
  {
    x -= v;
    y -= v;
  }
  P operator+(const P &b) const
  {
    return P{x + b.x, y + b.y};
  }
  P operator-(const P &b) const
  {
    return P{x - b.x, y - b.y};
  }
  int operator*(const P &b) const
  {
    return x * b.y - y * b.x;
  }
  bool operator<(const P &p) const
  {
    return make_pair(x, y) < make_pair(p.x, p.y);
  }
};
public:
    vector<vector<int>> outerTrees(vector<vector<int>>& trees) {
        if(trees.size()==1)
            return trees;
        vector<P>points;
        for(auto& it : trees)
        {
            P p = {it[0],it[1]};
            points.push_back(p);
        }
        sort(points.begin(),points.end());
        vector<P>hull;
        map<P,bool>vis;
        for(int i = 0; i < 2 ; ++i)
        {
            int cur = hull.size();
            for(auto& c : points)
            {
                while(hull.size() - cur >= 2)
                {
                    P a = hull.end()[-2];
                    P b = hull.end()[-1];
                    if((b-a) * (c-a) <= 0)
                        break;
                    hull.pop_back();
                }
                hull.push_back(c);
            }
            hull.pop_back();
            reverse(points.begin(),points.end());
        }
        vector<vector<int>>ans;
        for(auto& it : hull)
        {
            if(!vis[it])
                ans.push_back({it.x,it.y});
            vis[it] = true;
        }
        return ans;
    }
};
