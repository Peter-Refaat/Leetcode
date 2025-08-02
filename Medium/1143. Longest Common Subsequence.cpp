class Solution {
public:
    int dp[1005][1005] = {};
    int rec(int i, int j, string& a , string& b , int n , int m)
    {
        if(i == n or j == m)
            return 0;
        if(~dp[i][j])
            return dp[i][j];
        if(a[i] == b[j])
        {
            return dp[i][j] = rec(i+1,j+1,a,b,n,m)+1;
        }
        return dp[i][j] =  max(rec(i+1,j,a,b,n,m),rec(i,j+1,a,b,n,m));
    }
    int longestCommonSubsequence(string text1, string text2) {
        memset(dp,-1,sizeof(dp));
        return rec(0,0,text1,text2,text1.size(),text2.size());
    }
};
