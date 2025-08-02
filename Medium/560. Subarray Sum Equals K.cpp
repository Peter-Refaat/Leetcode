class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        map<int, int> mp;
        mp[0] = 1;
        int sum = 0, ans = 0;
        for (auto &it : nums)
        {
            sum += it;
            ans += mp[sum - k];
            mp[sum]++;
        }
        return ans;
    }
};