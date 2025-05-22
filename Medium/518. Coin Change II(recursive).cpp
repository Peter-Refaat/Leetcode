class Solution {
private:
   int dp[305][5005];
public:
    Solution()
    {
        memset(dp,-1,sizeof dp);
    }
    int rec(int i , int cur , int& n , int& target , vector<int>& coins)
    {
        if(i == n)
            return (cur == target);
        if(~dp[i][cur])
            return dp[i][cur];
        int take = 0 , leave = 0;
        if(cur + coins[i] <= target)
            take = rec(i,cur + coins[i],n,target,coins);
        leave = rec(i+1,cur,n,target,coins);
        return dp[i][cur] =  take + leave;
    }
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        return rec(0,0,n,amount,coins);
    }
};
