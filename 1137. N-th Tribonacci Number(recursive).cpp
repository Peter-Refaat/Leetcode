class Solution {
public:
    int rec(int n , int dp[])
    {
        if(n==0)
            return 0;
        if(n <= 2)
            return 1;
        if(~dp[n])
            return dp[n];
        return dp[n] = rec(n-1,dp) + rec(n-2,dp) + rec(n-3,dp);
    }
    int tribonacci(int n) {
        int dp[n+5];
        memset(dp,-1,sizeof dp);
        return rec(n,dp);
    }
};
