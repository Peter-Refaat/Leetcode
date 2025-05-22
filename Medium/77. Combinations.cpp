class Solution {
private:
    vector<int>cur;
public:
    void rec(int i , vector<int>& v , vector<int>& cur , vector<vector<int>>& ans , int& k)
    {
        if(i==v.size())
        {
            if(cur.size() == k)
                ans.push_back(cur);
            return;
        }
        cur.push_back(v[i]);
        rec(i+1,v,cur,ans,k);
        cur.pop_back();
        rec(i+1,v,cur,ans,k);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>v(n+1);
        vector<vector<int>>ans;
        iota(v.begin(),v.end(),0);
        rec(1,v,cur,ans,k);
        return ans;
    }
};
