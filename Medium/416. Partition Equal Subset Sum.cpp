class Solution {
private:
    int dp[205][100*200 + 5];
public:
    Solution()
    {
        memset(dp,-1,sizeof dp);
    }
    bool rec(int i , int cur, vector<int>& nums, int& sum)
    {
        if(i==nums.size())
            return (sum == (cur<<1));
        int& ret = dp[i][cur];
        if(~ret)
            return ret;
        ret = 0;
        ret |= rec(i+1,cur+nums[i],nums,sum) | rec(i+1,cur,nums,sum);
        return ret;
    }
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(auto& it : nums)
            sum+=it;
        if(sum&1)
            return false;
        return rec(0,0,nums,sum);
        
    }
};
