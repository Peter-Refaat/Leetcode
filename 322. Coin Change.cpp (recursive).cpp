#define ll long long
class Solution {
private:
   ll dp[15][10005];
public:
    Solution()
    {
        memset(dp,-1,sizeof dp);
    }
    int rec(int i , int cur , int& n , int& target , vector<int>& coins)
    {
        if(i == n)
            return (cur == target ? 0 : 1e9);
        if(~dp[i][cur])
            return dp[i][cur];
        ll take = 1e9 , leave = 1e9;
        if(cur + coins[i] * 1LL <= target)
            take = rec(i,cur + coins[i],n,target,coins) + 1;
        leave = rec(i+1,cur,n,target,coins);
        return dp[i][cur] =  min(take,leave);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        int ans = rec(0,0,n,amount,coins);
        return (ans >= 1e9 ? -1 : ans);
    }
};
