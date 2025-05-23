class Solution {
private:
    vector<long long>dp;
public:
    long long rec(int i,vector<vector<int>>& q, int& n)
    {
        if(i >= n)
            return 0;
        if(~dp[i])
            return dp[i];
        return dp[i] = max(rec(i+1,q,n),rec(i+q[i][1]+1,q,n) + q[i][0]);
    }
    long long mostPoints(vector<vector<int>>& questions) {
        int n = questions.size();
        dp.resize(n+1,-1);
        return rec(0,questions,n);
    }
};
