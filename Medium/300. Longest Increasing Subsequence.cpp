class Solution {
public:
    // O(N^2)
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n,1);
        int ans = 1;
        for(int i = 0 ; i < n ; ++i)
        {
            for(int j = 0 ; j < i ; ++j)
            {
                if(nums[j] >= nums[i])
                    continue;
                dp[i] = max(dp[i],dp[j]+1);
            }
            ans = max(ans,dp[i]);
        }
        return ans;
    }
    //O(Nlg(N))
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int>lis;
        for(int i = 0 ; i < n ; ++i)
        {
            if(lis.empty())
                lis.push_back(nums[i]);
            else if(nums[i] <= lis.back())
            {
                auto idx = lower_bound(lis.begin(),lis.end(),nums[i]) - lis.begin();
                lis[idx] = nums[i];
            }
            else lis.push_back(nums[i]);
        }
        return lis.size();
    }
};
