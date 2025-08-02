class Solution {
private:
    int dp[1005][2005],pref[1005][2005],n;
public:
    Solution()
    {
        memset(dp,-1,sizeof dp);
        memset(pref,0,sizeof pref);
    }
    int rec(int i , int cap , vector<vector<int>>& piles)
    {
        if(i==n+1)
            return 0;
        int &ret = dp[i][cap];
        if(~ret)
            return ret;
        int take = 0 , leave = 0;
        for(int j = 0 ; j <= min(cap,(int)piles[i-1].size()) ; ++j)
            take = max(take,rec(i+1,cap-j,piles) + pref[i][j]);
        leave = rec(i+1,cap,piles);
        return ret = max(take,leave);
    }
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        n = piles.size();
        for(int i = 1 ; i <= n ; ++i)
        {
            for(int j = 1 ; j <= min((int)piles[i-1].size(),k); ++j)
            {
                pref[i][j] = pref[i][j-1] + piles[i-1][j-1];
            }
        }
        return rec(1,k,piles);
    }
};
