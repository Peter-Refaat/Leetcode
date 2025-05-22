class Solution {
private:
    string s;
    int dp[2][15][15];
public:
    Solution()
    {
        memset(dp,-1,sizeof dp);
    }
    int rec(int i , bool r , int cnt)
    {
        if(i==s.size())
            return cnt;
        int& ret = dp[r][i][cnt];
        if(~ret)
            return ret;
        ret = 0;
        int hi = r ? s[i] - '0' : 9;
        for(int dig = 0 ; dig <= hi; ++dig)
            ret += rec(i+1,r and dig==hi,cnt + (dig==1));
        return ret;
    }
    int countDigitOne(int n)
    {
        s = to_string(n);
        return rec(0,1,0);
    }
};
